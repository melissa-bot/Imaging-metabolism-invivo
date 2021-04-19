import numpy as np
from numpy import diff
import matplotlib.pyplot as plt
from scipy.signal import savgol_filter

data_example=np.loadtxt("ROIexample.txt")#txt obtained after multimesure analysis in FIJI
data_pos_example=np.loadtxt("ROIexamplepos.txt")#txt obtained after mesure of center of mass for each ROI in FIJI
dl=np.delete(data_example, 0, 1)#dl:data loaded
n=np.linalg.norm(dl,axis=0)
dn=dl/n#data loaded/norm=data normalized
dn.shape
ws_f=dl.shape[0]/7#window size _float
def round_up_to_odd(x):
    return np.ceil(x) // 2 * 2 + 1
ws_i= int(round_up_to_odd(ws_f))#window size integrer odd

def my_filter(x):
    return savgol_filter(x, ws_i, 3, axis=0)#window size dependant of length, polynomial order 2, axis by columns
df=np.apply_along_axis(my_filter, 0, dn) #df:data filtered
def deriv(x):
    return diff(x, axis=0)#will return the first derivative
Dderiv=np.apply_along_axis(deriv, 0, df) #Data after first derivative transformation
#Stimation of times points depending of the parameter used

b=np.array([t - s for s, t in zip(Dderiv[50:], Dderiv[:-50])])# find differences between 50 subsequent elements
c=np.reshape(b, (Dderiv.shape[0]-50, Dderiv.shape[1]))#Matrix with cero when the tendency is not increasing
t1=(np.argmax(c>0.00001, axis=0)*0.0662)#diferences greater than 0.00001 and exposure in seconds
#this time correspond to the intermedium point with derivation:
t2=(np.argmax(Dderiv, axis=0)*0.0662)#maximum value after first derivation and exposure in seconds
#this correspond to the maximum point with derivation:
t3=(np.argmin(Dderiv, axis=0)*0.0662)#minimum value after first derivation and exposure in seconds
#maximum poin per each ROI stimation without derivative.
t4=(np.argmax(df, axis=0)*0.0662)#find the maximun in data after appling the filter
print (t1, t2, t3, t4)#For evaluate t1 in comparision with the others

#Calculation of velocity
def printing_matrix(A):
    for ii in range(A.shape[0]):
        for jj in range(A.shape[1]):
            print ("%1.3f"%A[ii][jj]),
        print ("\n")

posicion = data_pos_example
pos = posicion[:, 2:]

#simetric matrix for estimate the velocoties in each point.  
velocity1 = np.zeros((pos.shape[0],pos.shape[0]), dtype = float)
velocity2 = np.zeros((pos.shape[0],pos.shape[0]), dtype = float)
velocity3 = np.zeros((pos.shape[0],pos.shape[0]), dtype = float)
velocity4 = np.zeros((pos.shape[0],pos.shape[0]), dtype = float)

for ii in range(0, pos.shape[0]-1):#para x,
    for jj in range(ii+1, pos.shape[0]):#ti
        d = ((pos[ii][0]-pos[jj][0])**2+(pos[ii][1]-pos[jj][1])**2)**.5
        v1 = d/(t1[ii]-t1[jj])
        velocity1[ii][jj] = v1 #above
        velocity1[jj][ii] = -v1
        v2 = d/(t2[ii]-t2[jj])
        velocity2[ii][jj] = v2 #above
        velocity2[jj][ii] = -v2
        v3 = d/(t3[ii]-t3[jj])
        velocity3[ii][jj] = v3 #above
        velocity3[jj][ii] = -v3
        v4 = d/(t4[ii]-t4[jj])
        velocity4[ii][jj] = v4 #above
        velocity4[jj][ii] = -v4
        
mv11=np.triu(velocity1,k = 1)#eliminate values under the diagonal
mv21=mv11[~np.isinf(mv11)]#exclude infinitive values
mv31=np.array(mv21[abs(mv21)>0])#selection of data that is higher than cero
mean_velocity_t1=(np.mean(mv31))*3 #mean velocity in um per second for t1, each pixel is 3um
print (mean_velocity_t1)#value in um/s

mv12=np.triu(velocity2,k = 1)#eliminate values under the diagonal 
mv22= mv12[~np.isinf(mv12)]#exclude infinitive values 
mv32=np.array(mv22[abs(mv22)>0])#exclude  values of cero of regions that are too close
mean_velocity_t2 = (np.mean(mv32))*3 #mean velocity in um per second for t2, each pixel is 3um
print (mean_velocity_t2) #value in um/s

mv13=np.triu(velocity3,k = 1)#eliminate values under the diagonal
mv23=mv13[~np.isinf(mv13)]
mv33=np.array(mv23[abs(mv23)>0])#mv23[np.logical_not(np.isnan(mv23))]#exclude infinitive values of regions that are too close
mean_velocity_t3=(np.mean(mv33))*3 #mean velocity in um per second for t3, each pixel is 3um
print (mean_velocity_t3) #value in um/s

mv14=np.triu(velocity4,k = 1)#eliminate values under the diagonal
mv24=mv14[~np.isinf(mv14)]
mv34=np.array(mv24[abs(mv24)>0])#mv23[np.logical_not(np.isnan(mv23))]#exclude infinitive values of regions that are too close
mean_velocity_t4=(np.mean(mv34))*3 #mean velocity in um per second for t4, each pixel is 3um
print (mean_velocity_t4) #value in um/s

mean_velocity_example=np.array([("Data_Example", mean_velocity_t1, mean_velocity_t2, mean_velocity_t3, mean_velocity_t4)])


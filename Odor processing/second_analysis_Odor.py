ratio_complete=np.array(Data_UV/Data_Blue)
from scipy.signal import savgol_filter
def my_filter(x):
    return savgol_filter(x, 101, 3, axis=0)#window size:101, polynomial order 3, axis by columns
for column in ratio_complete:
   data_filtered= my_filter(ratio_complete) #Data Filtered number 281

N=data_filtered[100:200,:]#Frames chosed as control, same period (3s)
S1=data_filtered[416:441, :]#frames in which the odor is present, first stimuli
S2=data_filtered[692:717, :]#frames in which the odor is present, second stimuli
S3=data_filtered[908:933, :]#frames in which the odor is present, third stimuli

N_sub=np.mean(N-(np.mean(data_filtered[90:100,:],axis=0)),axis=0)#Subtraction of the average of N values
S1_sub=np.mean(S1-(np.mean(data_filtered[406:416,:],axis=0),axis=0))-N_sub#Subtraction of the average of N values
S2_sub=np.mean(S2-(np.mean(data_filtered[682:692,:],axis=0),axis=0))-N_sub#Subtraction of the average of N values
S3_sub=np.mean(S3-(np.mean(data_filtered[898:908,:],axis=0),axis=0))-N_sub#Subtraction of the average of N values

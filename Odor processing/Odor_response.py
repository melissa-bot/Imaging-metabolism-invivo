ratio_complete_A=np.array(B_UV/B_Blue)#upload the file first
time=(np.arange(ratio_complete_A.shape[0]))*slp#thos is required to later steps
array=np.transpose(np.array([time,time]))#THIS IS FOR MAKE POSSIBLE THE SUBSTRATION ALONG EACH ROI
ratio_complete=ratio_complete_A-array#ratio minus the substraction
from scipy.signal import savgol_filter
def my_filter(x):
    return savgol_filter(x, 51, 3, axis=0)#window size:51, polynomial order 3, axis by columns
for column in ratio_complete:
   data_filtered= my_filter(ratio_complete) 

time=(np.arange(data_filtered.shape[0]))*0.12 #in seconds
S1=data_filtered[605:635, :]#change by the interval of frames were the stimuli was present
N=data_filtered[100:200,:]#change by the interval of frames before the stimuli was present
S2=data_filtered[1100:1200, :]#in this case after the 1st odor response try to do it between 2nd and 3rd stimuli


#STIMULI NORMALIZED WITH 5 FRAMES BEFORE THE RELEASE OF ODOR
N_B=np.mean(N-(np.mean(N[0:5,:],axis=0)),axis=0)#mean for each ROI
S1_N_B=np.mean(S1-(np.mean(S1[0:5,:],axis=0)),axis=0)#mean for each ROI
S2_N_B=np.mean(S2-(np.mean(S2[0:5,:],axis=0)),axis=0)#mean for each ROI

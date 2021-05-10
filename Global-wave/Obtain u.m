clear all, close all, clc
D=MRIread('/Data_example.nii');%change by the location of the data
Data2=D.vol;
size(Data2);
Avs=diff(Data2,1,3);
Av=mean(Avs);

ds=squeeze(Av);
v0=ds(:,1:20);%change by the previous values before the wave
vs=ds - mean(v0,[2]);
u_i=transpose(normalize(vs,2)*-1);∞normalize the data to get the u in the same rage than the training data
order = 3;%polinomial order
framelen = 151;∞Have to be an odd number and less than the lenght of the data
u_f=sgolayfilt(u_i,order,framelen);%to filter the noise
u=transpose(u_f);
size(u);
dt=0.1;
t=transpose(0.1:dt:48.1); eps=0.01; %to transform to the dimensions required
L=16; n=176; %n=legh in x number of pixels
x2=linspace(-L./2,L./2,n+1); x=transpose(x2(1:n)); k=(2*pi/L)*[0:n./2-1 -n./2:-1].';
k2=fftshift(k);
figure(1), 
waterfall(x,t,real(u.')); colormap([0 0 0]);%To observe the input data
view(15,35), set(gca,'Fontsize',[12])

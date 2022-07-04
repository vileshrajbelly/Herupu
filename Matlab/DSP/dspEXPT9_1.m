
clear;
clc;
fp=input('Eneter the pasband edge frequency:')
fs=input('Enter the stopband edge freuqnecy :')
Ap=input('Enter the passband attenuation in db')
As=input('Enter the stopband attenuation in db:')
fsamp=input('Enter the sampling frequnecy in hz:')
wp=(2*pi*fp/fsamp)
ws=(2*pi*fs/fsamp)
wp=2*fsamp*tan(wp/2)
ws=2*fsamp*tan(ws/2)
[N,wc]=buttord(wp,ws,Ap,As,'s')
[b,a]=butter(N,wc,'s');
[num,den]=bilinear(b,a,fsamp);
disp('Numerator,a=');disp(num)
disp('Denominator,d=');disp(den)
freqz(num,den,256,fsamp);
grid on;
xlabel('frequency in Hz');
ylabel('magnitude in db');
title('Frequency response of lpf');
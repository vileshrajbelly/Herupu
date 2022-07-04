clc;
clear;
wp=input('enter the passband edge freuqnecy:')
ws=input('enter the stopband edge freqnecy:')
Ap=input('enter the passband attenuation :')
as=input('enter the stopband attenuation :')
fsamp=input('enter the sampling frequency :')
Apdb=-20*log10(Ap)
Asdb=-20*log10(as)
ohmp=2*fsamp*tan(wp/2)
ohms=2*fsamp*tan(ws/2)
[N,wc]=cheb1ord(ohmp,ohms,Apdb,Asdb,'s')
[b,a]=cheby1(N,Apdb,wc,'s');
display('analog unnormalised trf')
Hs=tf(b,a)
[num,den]=bilinear(b,a,fsamp);
disp('Numerator,a=');disp(num)
disp('Denominator,a=');disp(den)
display('digital trf')
Hz=tf(num,den,1/fsamp)
w=0:pi/16:pi;
display('Frequency response is:');
Hfreq=freqz(num,den,w)
display('magnitude response is:')
Hmag=abs(Hfreq)
plot(w/pi,Hmag,'k')
grid on;
ylabel('magnitude in db')
title('Frequency response of IIR chebyshev LPF');

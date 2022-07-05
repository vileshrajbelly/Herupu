%verification of sampling Theoram
clear;
clc;



t=0:0.001:0.2;
f1=input('Enter the freq-1 in hz:');
f2=input('Enter the freq-2 in Hz:');
x=cos(2*pi*f1*t)+cos(2*pi*f2*t);

fm=max(f1,f2);

%analog signal sampled at fs<<2fm(under sampling)
fs1=1*fm;
n=0:1/fs1:0.2;
x1=cos(2*pi*f1*n)+cos(2*pi*f2*n);
figure(1);
subplot(3,3,1);
plot(t,x,'r')
xlabel('--->t');
ylabel('Amp');
title('input signal');

subplot(3,3,2);
stem(n,x1)
xlabel('--->n');
ylabel('Amp');
title('under sampled signal ');

subplot(3,3,3);
plot(n,x1);
xlabel('--->n');
ylabel('Amp');
title('reconstructed signal');

%analog signal at fs=2fm
fs2=2*fm;
n=0:1/fs2:0.2;
x2=cos(2*pi*f1*n)+cos(2*pi*f2*n);
subplot(3,3,4);
plot(t,x,'r');
xlabel('--->t');
ylabel('Amp');
title('Input');

subplot(3,3,5);
stem(n,x2)
xlabel('--->n');
ylabel('Amp');
title('sampled at Nyquist rate');

subplot(3,3,6);
plot(n,x2)
xlabel('--->n');
ylabel('Amp');
title('reconstructed signal');

%analog signal sampled at fs>>2fm
fs3=20*fm;
n=0:1/fs3:0.2;
x3=cos(2*pi*f1*n)+cos(2*pi*f2*n);
subplot(3,3,7);
plot(t,x,'r')
xlabel('--->t');
ylabel('Amp');
title('Input signal');

subplot(3,3,8);
stem(n,x3)
xlabel('--->n(1BG19EE050)');
ylabel('Amp');
title('oversampled signal');

subplot(3,3,9);
plot(n,x3)
xlabel('--->n');
ylabel('Amp');
title('reconstructed signal');
%Frequency Domain sampling
figure(2)

subplot(3,1,1)
[m,w]=freqz(x1,1,128);
plot(fs1*w/(2*pi),abs(m));
title('spectrum of undersampled signal 1BG19EE050');

subplot(3,1,2);
[m,w]=freqz(x2,1,128);
plot(fs2*w/(2*pi),abs(m));
title('spectrum of Nyquist sampled signal');

subplot(3,1,3);
[m,w]=freqz(x3,1,128);
plot(fs3*w/(2*pi),abs(m));
title('spectrum of over sampled signal');

clc;
clear;
x=input('enter the time domain sequence')
N=input('enter the NO.of points of dft')
X=fft(x,N)
x1=ifft(X,N)
n=0:length(x)-1;

stem(n,x);
title('Input  sequence');xlabel('Time(n)');ylabel('x(n)');

k=0:N-1;
figure(2)

subplot(2,1,1);
stem(k,abs(X));
title('Frequency domain Magnitude response');xlabel('Frequency -k');ylabel('Mag|x(k)|');

subplot(2,1,2);
stem(k,angle(X));
xlabel('Frequency K');ylabel('angle (X)');title('Frequency domain Phase response');


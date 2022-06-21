clc ;
clear;
x=input('Enter the first sequence x[n]');
N1=input('enter the dft size:');
L1=length(x);
x=[x,zeros(1,N1-L1)];
for k=0:1:N1-1
    X(k+1)=0;
    for n=0:1:N1-1
        X(k+1)=X(k+1)+x(n+1)*exp(-j*2*pi*k*n/N1);
    end
end
Xmag=abs(X);
Xang=angle(X);
disp('DFT of first sequence X(k)');
disp(Xmag);
disp(Xang);
k=0:1:N1-1;

subplot(2,1,1);
stem(k,Xmag);xlabel('--->k');ylabel('Magnitude of X(k)');
title('MagnitudeSpectrum 1BG19EE050');

subplot(2,1,2);
stem(k,Xang);xlabel('--->k');ylabel('Magnitude of X(k)in radians');
title('PhaseSpectrum');

pause;
h=input('Enter the second seq h[n]')
N2=input('enter the dft size:');
L2=length(h);
h=[h,zeros(1,N2-L2)];
for k=0:1:N2-1
    H(k+1)=0;
    for n=0:1:N2-1
        H(k+1)=H(k+1)+h(n+1)*exp(-j*2*pi*k*n/N2);
    end
end
Hmag=abs(H);
Hang=angle(H);
disp('DFT of second sequence H(k)');
disp(Hmag);
disp(Hang);
k=0:1:N2-1;

subplot(2,1,1);
stem(k,Hmag);
xlabel('-->k');
ylabel('magnitude of H(k) 1BG19EE050');
title('magnitudespectrum');

subplot(2,1,2);
stem(k,Hmag);
xlabel('-->k');
ylabel('phase of H(k) in radians');
title('phase spectrum');

pause;
Y=X.*H;
N=length(Y);
Ymag=abs(Y);
Yang=angle(Y);
disp('DFT of output sequence Y(k)');
disp(Ymag);
disp(Yang);
k=0:1:N-1;

subplot(2,1,1);
stem(k,Ymag);
xlabel('-->k');
ylabel('magnitude of Y(k)');
title('magnitude spectrum');

subplot(2,1,2);
stem(k,Yang);
xlabel('-->k');
ylabel('Phase of Y(k) in radians');
title('phase spectrum');

pause;

[P,Q]=size(Y);
if Q~=1
   Y=Y.';
   P=Q;
end
y=zeros(P,1);
k=0:P-1;
for n=0:P-1;
    y(n+1)=exp(j*2*pi*k*n/P)*Y;
end
y=y/P;
disp('IDFT of output sequence y(n)');
disp(y)
pause;

subplot(3,1,1);
stem(k,x);
xlabel('--->n')
ylabel('Amplitude');
title('first input signal x[n]');

subplot(3,1,2);
stem(k,h);
xlabel('--->n')
ylabel('Amplitude');
title('second input signal h[n]');

subplot(3,1,3);
stem(k,y);
xlabel('--->n')
ylabel('Amplitude');
title('circular convolution via DFT is y[n]');

clc;
clear all;
x1=[1 2 2 1];
x2=[3 1 1 2 3];
N1=length(x1);
N2=length(x2);
N=N1+N2-1;

x1= [x1,zeros(1,N2-N1)]

X1=fft(x1,N);
X2=fft(x2,N);

for k=0:N-1
    Y(k+1)=X1(k+1)*X2(k+1)
end
y=ifft(Y,N)

subplot(3,1,1);
stem(x1);
xlabel('time');ylabel('magnitude');

subplot(3,1,2);
stem(x2);
xlabel('time');ylabel('magnitude');

subplot(3,1,3);
stem(y);
xlabel('time');ylabel('magnitude');
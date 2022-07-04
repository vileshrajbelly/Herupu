clear;
clc;
x=[2 3 -1 4];
N=length(x);
X=zeros(1,N);
for k=0:N-1
    for n=0:N-1
        X(k+1)=X(k+1)+(x(n+1)*exp(-j*pi*2*n*k/N));
        magX(k+1)=abs(X(k+1));
        angX(k+1)=angle(X(k+1));
    end
end
X
t=0:N-1;
subplot(3,1,1);
stem(t,x);
xlabel('time');ylabel('Amplitude');title('time domain i/p sequence');

subplot(3,1,2);
stem(t,magX)
xlabel('frequency samples k');ylabel('|X(k)|');title('frequency domain magnitude responce');


subplot(3,1,3);
stem(t,angX)
xlabel('frequency samples k');ylabel('angle X(k)');title('frequency domain phase responce');

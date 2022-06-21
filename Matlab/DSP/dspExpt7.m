clear;
clc;
a=input('enter the coefficents of x ');
b=input('enter the coefficents of y ');
N=input('enter the length of the input ');
n=0:N;
x=(1/2).^n;
h=filter(a,b,x)

subplot(2,1,1);
stem(n,x);
xlabel('--->n');ylabel('amplitude');title('input sequence');

subplot(2,1,2);
stem(n,h);
xlabel('--->n');ylabel('amplitude');title('response of the system');

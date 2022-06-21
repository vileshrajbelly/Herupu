clear;
clc;
x=[1,2,3,4];
h=[2,1,5,6];
n=-2:1:1;
y=-1:1:2;
z=-3:1:3;
c=conv(x,h);

subplot(3,1,1);
stem(n,x);
ylabel('amp');xlabel('-->n');title('input signal');

subplot(3,1,2);
stem(y,h);
ylabel('amp');xlabel('-->n');title('impluse signal');

subplot(3,1,3);
stem(z,c);
ylabel('amp');xlabel('-->n');title('output signal');

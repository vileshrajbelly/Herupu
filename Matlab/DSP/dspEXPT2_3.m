clear;
clc;
N=input('length of impluse response required: ')
a=[1,-1,0.9];
b=[1];
h=impz(b,a,N);
stem(h);
xlabel('N');ylabel('h(n)');title('Impluse response');
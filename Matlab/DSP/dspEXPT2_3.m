clear;
clc;
N=input('length of impluse response required: ')
a=[1];
b=[1,-1,0.9];
h=impz(a,b,N);
stem(h);
xlabel('N');ylabel('h(n)');title('Impluse response');

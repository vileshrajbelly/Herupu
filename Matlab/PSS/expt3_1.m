clear;
clc;
z=[1 2 0.02+0.06i 
   1 3 0.08+0.24i 
   2 3 0.06+0.18i 
   2 4 0.06+0.08i 
   2 5 0.04+0.12i 
   3 4 0.01+0.03i 
   4 5 0.08+0.24i];
fb=z(:,1);
tb=z(:,2);
Z=z(:,3);
Y=1./Z;
nbus=max(max(fb),max(tb));
nline=length(fb);
ybus=zeros(nbus);
A=zeros(nline,nbus);
for k=1:nline
    A(k,fb(k))=1;
    A(k,tb(k))=-1;
end
ypr=zeros(nline);
for k=1:nline
    ypr(k,k)=Y(k);
end
ybus=A'*ypr*A;

clc;
clear;
l=40;
z=0.2+0.408i;
y=0+3.14e-6i;
vr=132e3;
ir=174.96-131.22i;
Z=z*l;
Y=y*l;
A=1;
D=A;
B=Z;
C=0;
fprintf("A*D-B*C= %0.0f\n", A*D-B*C);

vrph=vr/sqrt(3);
vsph=A*vrph+B*ir;
is=C*vrph+D*ir;
pr=3*real(vrph*conj(ir))/1e6;
ps=3*real(vsph*conj(is))/1e6;

eff=100*pr/ps;
fprintf("effiency= %0.3f\n", eff);

vreg=abs(vsph-vrph)/abs(vrph)*100;
fprintf("voltage regulation= %0.3f\n", vreg);

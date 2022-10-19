%Long case1
clc;clear;
l=300;
z=0.2+0.408i;
y=0+3.14e-6i;
vr=132e3;
ir=174.96-131.22i;
zc=sqrt(z/y);
gam=sqrt(z*y)*l;
A=cosh(gam);
D=A;
B=zc*sinh(gam);
C=(1/zc)*sinh(gam);
fprintf("A*D-B*C= %0.0f\n", A*D-B*C);

zeq=(z*l*sinh(gam))/gam;
yeq=(y*(l/2)*tanh(gam/2))/(gam/2);

vrph=vr/sqrt(3);
vsph=A*vrph+B*ir;1l
is=C*vrph+D*ir;
pr=3*real(vrph*conj(ir))/1e6;
ps=3*real(vsph*conj(is))/1e6;

eff=100*pr/ps;
fprintf("effiency= %0.3f\n", eff);

vreg=(((abs(vsph)/abs(A))-abs((vrph)))/abs(vrph))*100;
fprintf("voltage regulation= %0.3f\n", vreg);
zeq
yeq

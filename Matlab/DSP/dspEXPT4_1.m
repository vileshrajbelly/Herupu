x=[2 1 2 1];
h=[1 2 3 4];
n1=length(x);
n2=length(h);
N=max(n1,n2);
    for n=0:N-1
        y(n+1)=0;
        for k=0:N-1
            i=mod((n-k),N);
            if i<0
            i=i+N;
            end
            y(n+1)=y(n+1)+h(k+1)*x(i+1);
        end
    end
subplot(3,1,1);
stem(x);
xlabel('--->n');ylabel('amp');title('input sequence X');

subplot(3,1,2);
stem(h);
xlabel('--->n');ylabel('amp');title('input sequence Y');

subplot(3,1,3);
stem(y);
xlabel('--->n');ylabel('amp');title('Output sequence ');

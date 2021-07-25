T=int(input())
i=1
while i<=T:
	N,H,Y1,Y2,L=input().split()
	N=int(N)
	H=int(H)
	Y1=int(Y1)
	Y2=int(Y2)
	L=int(L)
	no_of_barrier_crossed=0
	x=1
	while x<=N:
		t,X=input().split()
		t=int(t)
		X=int(X)
		if L==0:
			no_of_barrier_crossed=no_of_barrier_crossed-1
			print(no_of_barrier_crossed)
			L=-1
		elif L>0:
		    if t==1:
		    	if H-Y1<=X:
		    		no_of_barrier_crossed=no_of_barrier_crossed+1
		    	else:
		    		L=L-1
		    		no_of_barrier_crossed=no_of_barrier_crossed+1
		    if t==2:
		    	if Y2>=X:
		    		no_of_barrier_crossed=no_of_barrier_crossed+1
		    	else:
		    		L=L-1
		    		no_of_barrier_crossed=no_of_barrier_crossed+1
		x=x+1
		if x==N and L!=-1:
			print(no_of_barrier_crossed)
i=i+1
    
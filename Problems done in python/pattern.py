N=int(input())
i=N-2
p=N//2+1
x=1
print("*"*N)
while i>0:
	if x<=p:
	    print("*"*(p-x),end="")
	    print(" "*(2*x-1),end="")
	    print("*"*(p-x))
	    x+=1
	else:
		x=2
		z=2*(N//2) -1
		if x<=N//2:
			print("*"*x,end="")
			print(" "*(z-2),end="")
			print("*"*x)
	i-=1
print("*"*N)


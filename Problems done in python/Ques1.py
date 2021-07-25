L,R=input().split()
L=int(L)
R=int(R)
i=min(L,R)
while i<=max(L,R):
	if i%2!=0:
		print(i,end=" ")
	i=i+1
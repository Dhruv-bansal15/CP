N=int(input())
i=1
a=10
b=2
while i<=N:
	if i%2!=0:
		print(a,end=" ")
		a=a+10
	if i%2==0:
		print(b,end=" ")
		b=b+2
	i+=1

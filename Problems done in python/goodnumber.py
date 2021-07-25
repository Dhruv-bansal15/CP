N=int(input())
i=2
result=0
while i<=N**0.5:
	if N%i==0:
		p=N/i
		if p==i:
		    result=result+i
		else:
			result=result+i+p
	i=i+1
result=result+1
if result==N:
	print("YES")
else:
	print("NO")
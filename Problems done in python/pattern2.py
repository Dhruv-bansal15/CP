n=int(input())
i=n//2 +1
row=1
x=0
while row<=n:
	if row<=i:
		print(" "*(row-1),end="")
		print("*"*(row))
	else:
		p=i-2
		print(" "*(p-x),end="")
		print("*"*(p-x+1))
		x=x+1
	row=row+1	
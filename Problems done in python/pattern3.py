n=int(input())
row=1
x=2*n-3
p=n-1
q=n-2
y=1
while row<=2*n-1:
	if row<=n:
		print(" "*(row-1),end="")
		print(row,end="")
		print(" "*(x),end="")
		if row!=n:
			print(row)
		x=x-2
	else:
		print(" "*(q),end="")
		print(p,end="")
		print(" "*y,end="")
		print(p)
		p=p-1
		y=y+2
		q=q-1
	row=row+1






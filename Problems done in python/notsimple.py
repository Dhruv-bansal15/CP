N=int(input())
row=1
x=1
p=1
while row<=N:
	y=p//2+1
	sub_row=1
	while sub_row<=y:
		print(x, end=" ")
		x=x+1
		sub_row+=1
	x=x-2
	while x>=row:
		print(x, end=" ")
		x-=1
	print("")
	row=row+1
	x=row
	p=p+2



N=int(input())
i=1
a=1
a_num=1
b=10
b_num=10
while i<=N:
	if i%2!=0:
		p=1
		while p<=5:
			print(a," ", end="")
			a=a+1
			p+=1
		a_num+=10
		a=a_num
	else:
		p=1
		while p<=5:
			print(b," ",end="")
			b=b-1
			p+=1
		b_num+=10
		b=b_num
	i=i+1
	print("")
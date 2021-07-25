T=int(input())
for i in range(0,T):
	arr=[]
	a,b,c,d=[int(x) for x in input().split()]
	while a!=c or b!=d:
		if c>a:
			arr.append("E")
			a+=1
		if c<a:
			arr.append("W")
			a-=1
	
		if d>b:
			arr.append("N")
			b+=1
		if d<b:
			arr.append("S")
			b-=1
	if len(arr)>0:
		print(len(arr))
	else:
		print("0")
	for i in range(0,len(arr)):
		print(arr[i],end="")
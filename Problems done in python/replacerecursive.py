n=int(input())
i=1
arr=[]
while i<=n:
	x=int(input())
	arr.append(x)
	i=i+1
while len(arr)!=1:
	a=min(arr)
	arr.remove(a)
	b=min(arr)
	if b==a:
	    while b==a:
	    	x=arr
	    	b=min(x)
	    	x.remove(b)
	    	b=min(x)
	    b=min(x)
	arr.remove(b)
	p=(3*a+2*b)%100
	arr.append(p)
print(arr[0])

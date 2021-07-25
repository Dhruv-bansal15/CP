n=int(input())
i=0
a=0
b=1
if n==1:
	print(a)
elif n==2:
	print(a,b)
else:
	result=[a,b]
	i=2
	while i<n:
		x=result[i-1]+result[i-2]
		result.append(x)
		i+=1
	for i in range(0,len(result)):
		print(result[i])



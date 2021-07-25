N=int(input())
num=N
result=0
while N>0:
	i=N%10
	result=result*10+i
	N=N//10
if num==result:
	print("YES")
else:
	print("NO")
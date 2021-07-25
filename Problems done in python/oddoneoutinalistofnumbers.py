def odd_one_out(li):
	result=0
	for i in range(0,len(li)):
		result=result^li[i]
	print(result)
n=int(input())
li=[]
for i in range(0,n):
	x=int(input())
	li.append(x)
odd_one_out(li)
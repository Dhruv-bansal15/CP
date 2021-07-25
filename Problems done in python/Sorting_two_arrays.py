T=int(input())
for i in range(0,T):
	n=int(input())
	lis1=input().split()
	for i in range(0,len(lis1)):
		lis1[i]=int(lis1[i])
	lis2=input().split()
	for i in range(0,len(lis2)):
		lis2[i]=int(lis2[i])
	lis1.sort()
	if lis2==lis1:
		print("yes")
	else:
		print("no")
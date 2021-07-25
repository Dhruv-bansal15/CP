
def no_of_chopsticks_formed(arr,D):
	count=0
	i=len(arr)-1

	while i>=1:
		if arr[i]-arr[i-1]<=D:
			count+=1
			i-=2

		else:
			i-=1
	print(count)

N,D=map(int, input().split())
arr=[]
for i in range(N):
	x=int(input())
	arr.append(x)
arr.sort()
no_of_chopsticks_formed(arr,D)

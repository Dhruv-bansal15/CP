def no_of_inversions(arr):
	count=0
	for i in range(0,len(arr)-1):
		for j in range(i+1,len(arr)):
			if arr[j]<arr[i]:
				count+=1
	print(count)
	return 

T=int(input())
for i in range(0,T):
	n=int(input())
	li=list(map(int, input().split()))
	no_of_inversions(li)
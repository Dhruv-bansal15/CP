def Adjacent_swap(arr):
	no_of_swaps=0
	index=[]
	for i in range(0,len(arr)):
		swapped=1
		for j in range(0,len(arr)-i-1):
			if arr[j]>arr[j+1]:
				arr[j],arr[j+1]=arr[j+1],arr[j]
				index.append(j)
				no_of_swaps+=1
				swapped=0
		if swapped==1:
			print(no_of_swaps)
			for i in range(0,len(index)):
				print(index[i],end=" ")
			return
	print(no_of_swaps)
	for i in range(0,len(index)):
		print(index[i],end=" ")
	return
n=int(input())
arr=list(map(int, input().split()))
Adjacent_swap(arr)





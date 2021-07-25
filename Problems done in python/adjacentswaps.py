def Adjacent_swaps(arr):
	no_of_swaps=0
	index=[]
	while len(arr)>1:
		max_element=max(arr)
		x=arr.index(max_element)
		if x==len(arr)-1:
			arr.pop()
		else:
			while x!=len(arr)-1:
				arr[x],arr[x+1]=arr[x+1],arr[x]
				index.append(x)
				x+=1
				no_of_swaps+=1
			arr.pop()
	print(no_of_swaps)
	for i in range(0,len(index)):
		print(index[i],end=" ")
n=int(input())
arr=list(map(int, input().split()))
Adjacent_swaps(arr)


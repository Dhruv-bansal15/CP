def sort_by_adj_swaps_and_print(arr,n):
	no_of_swaps=0
	swapped_index=[]
	for i in range(0,len(arr)-1):
		if_swapped=False

		for j in range(0,len(arr) - i - 1):
			if arr[j]>arr[j+1]:
				arr[j],arr[j+1]=arr[j+1],arr[j]
				if_swapped=True
				no_of_swaps+=1
				swapped_index.append(j)
		if if_swapped==False:
			print(no_of_swaps)
			if len(swapped_index)==0:
				return
			for m in swapped_index:
				print(m,end=" ")
			return
	print(no_of_swaps)
	for m in swapped_index:
		print(m,end=" ")
	return




n=int(input())
li=list(map(int,input().split()))
sort_by_adj_swaps_and_print(li,n)
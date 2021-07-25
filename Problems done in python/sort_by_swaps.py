def swap_sorting(arr):
	no_of_swaps=0
	for i in range(0,len(arr)):
		swapped_if= False
		for j in range(0,len(arr)-i-1):
			if arr[j]>arr[j+1]:
				arr[j],arr[j+1]=arr[j+1],arr[j]
				no_of_swaps+=1
				swapped_if= True
		if swapped_if==False:
			print(no_of_swaps)
			return
	print(no_of_swaps)
	return

T=int(input())
for i in range(0,T):
	n=int(input())
	lists=list(map(int, input().split()))
	swap_sorting(lists)
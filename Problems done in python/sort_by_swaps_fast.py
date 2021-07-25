def find_min_element_idx(arr, start):
	min_index = start
	start += 1

	while(start < len(arr)):
		if arr[start] < arr[min_index]:
			min_index = start

		start += 1

	return min_index

def selection_sort(arr):
	i = 0
	no_of_swaps=0
	swapped_indexes=[]
	while i < len(arr)-1:
		min_index = find_min_element_idx(arr, i)
		if i != min_index:
			arr[i], arr[min_index] = arr[min_index], arr[i]
			no_of_swaps+=1
			swapped_indexes.append([i,min_index])
		i += 1
	print(no_of_swaps)
	for i in swapped_indexes:
		print(i[0],i[1])

	return

N=int(input())
li= list(map(int, input().split()))

selection_sort(li)
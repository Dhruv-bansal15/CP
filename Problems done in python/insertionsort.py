def insertion_sort(arr):
	for i in range(1, len(arr)):
		key = arr[i] # this element will be now inserted to it's correct position
		j = i - 1 # because the right place of insertion will be on left
		while j >= 0 and key < arr[j]:
			arr[j+1] = arr[j]
			j -= 1
		arr[j+1] = key
		

	return

li = [5, 1, 1,8,6,3,2,1,4,5,9]

insertion_sort(li)

print(li)

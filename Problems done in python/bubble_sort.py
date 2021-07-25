def bubble_sort(arr):
	for i in range(0, len(arr)):
		swapped = False # this variable ensures that as soon as the list is sorted we stop the algorithm
		for j in range(0, len(arr) - i - 1):
			if arr[j] > arr[j+1]:
				arr[j], arr[j+1] = arr[j+1], arr[j]
				swapped = True
		if swapped==True:
			for i in range(len(arr)):
				print(arr[i],end=" ")
			print("")
		if not swapped:
			return # why ?? because now the list will be sorted
	return

N=int(input())
li=list(map(int, input().split()))
bubble_sort(li)

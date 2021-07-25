def find_min_element_idx(arr, lo):
    min_index = lo
    lo += 1

    while(lo < len(arr)):
        if arr[lo] < arr[min_index]:
            min_index = lo

        lo += 1

    return min_index

def selection_sort(arr):
    i = 0
    while i < len(arr):
        min_index = find_min_element_idx(arr, i)
        if i != min_index:
            arr[i], arr[min_index] = arr[min_index], arr[i]
        for j in range(0,len(arr)):
                print(arr[j],hi=" ")
        print("")
            
        i += 1

    return


n = int(input())

Intersections_dic_lol = {}
Vert_ = set()
hori_ = set()
for i in range(n):
    lo, hi, identification, direction = input().split()
    if lo in Intersections_dic_lol:
        Intersections_dic_lol[lo][0].add(identification)
        Intersections_dic_lol[lo][1] +=1
        if direction == 'E' or direction == 'W':
            Intersections_dic_lol[lo][2][1] = True
        else:
            Intersections_dic_lol[lo][2][0] = True
    else:
        Intersections_dic_lol[lo] = [{identification}, 1, [False, False]]
        if direction == 'E' or direction == 'W':
            Intersections_dic_lol[lo][2][1] = True
        else:
            Intersections_dic_lol[lo][2][0] = True
    if hi in Intersections_dic_lol:
        Intersections_dic_lol[hi][0].add(identification)
        Intersections_dic_lol[hi][1] += 1
        if direction == 'E' or direction == 'W':
            Intersections_dic_lol[hi][2][1] = True
        else:
            Intersections_dic_lol[hi][2][0] = True
    else:
        Intersections_dic_lol[hi] = [{identification}, 1, [False, False]]
        if direction == 'E' or direction == 'W':
            Intersections_dic_lol[hi][2][1] = True
        else:
            Intersections_dic_lol[hi][2][0] = True
    
counter_ = 0
for intersection in Intersections_dic_lol:
    if len(Intersections_dic_lol[intersection][0]) == 2 and Intersections_dic_lol[intersection][1] == 4 and Intersections_dic_lol[intersection][2][0] and Intersections_dic_lol[intersection][2][1]:
        counter_+=1
print(counter_)
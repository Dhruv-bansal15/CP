def progression(l):
    
    if len(l) == 1:
        return True
    else:

        diff = l[1] - l[0]
        for index in range(len(l) - 1):
            if not (l[index + 1] - l[index] == diff):
                return False
        return True
n=int(input())
arr=list(map(int, input().split()))
dic={}

fruitful_outputs=[]
for i in range(n):
    if (arr[i] not in dic):
        dic[arr[i]]=[i]
    else:
        dic[arr[i]].append(i)
n_ = len(dic)
for key in dic:
    lis_arr= dic[key]
    x= len(lis_arr)
    if x==1:
        fruitful_outputs.append([key,0])
        continue
    
    if(progression(lis_arr)):
        fruitful_outputs.append([key,lis_arr[1] - lis_arr[0]])
print(len(fruitful_outputs))
fruitful_outputs.sort()
for i in range(len(fruitful_outputs)):
    print(fruitful_outputs[i][0],fruitful_outputs[i][1])
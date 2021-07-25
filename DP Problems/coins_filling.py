n = int(input())
m= int(input())
start_arr=[0]*(1000005)
end_arr=[0]*(1000005)
for _ in range(m):
    l,r=map(int, input().split())
    start_arr[l]+=1
    end_arr[r]+=1
coins_no_in_a_box=[0]*(1000005)
coins_no_in_a_box[1]= start_arr[1]

for i in range(2 , n + 1):
    coins_no_in_a_box[i]= coins_no_in_a_box[i - 1] + start_arr[i] - end_arr[i - 1]
final_arr=[0]*(1000005) #stores at index i that i no of coins are present in how many boxes
for i in range(1,n + 1):
    final_arr[coins_no_in_a_box[i]]+=1
for i in range(n - 1, -1):
    final_arr[i] = final_arr[i] + final_arr[i + 1]
q=int(input())
for i in range(q):
    x=int(input())
    print(final_arr[x])

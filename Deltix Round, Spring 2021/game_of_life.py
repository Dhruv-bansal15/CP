#Here we know the maximum of iterations of the game played must be atmost n, coz in worst case we have to change all the n zeroes to 1
# And for each iteration of game, we need an O(n) loop to solve it , thus we have O(n^2) for the entire ques 

# for _ in range(int(input())):
#     n,m= map(int, input().split())
#     word= input()
#     word_ =[0]*n 
#     iteration_count=0
#     for i in range(n):
#         word_[i] = int(word[i])
#     temp= word_[:]
#     for i in range(n):
#         count=0
#         for j in range(n):
#             if word_[j] ==0:
#                 if j==0:
#                     if (j+1)<=(n-1) and word_[j+1]==1:
#                         temp[j]=1
#                         count+=1
#                 elif j==n-1:
#                     if word_[j-1]==1:
#                         temp[j]=1
#                         count+=1
#                 elif word_[j+1]==1 and word_[j-1]==0 :
#                     temp[j]=1
#                     count+=1
#                 elif word_[j+1]==0 and word_[j-1]==1:
#                     temp[j]=1
#                     count+=1
        
#         word_ = temp[:]
#         iteration_count+=1
#         if iteration_count==m:
#             break
#         if count==0:
#             break
#     for i in word_:
#         print(i,end="")
#     print()

#Method-2

# Here in this method we will check how many zeroes are present between 2 consecutive 1 and change them accordingly
def implement_central(a,b,k): #a=1 b=10 1000000001 k=3
    if b-a==1 or b-a==2:
        return
    front = a+1 #2
    end= b-1 #9
    mid= (b-a+1)//2 #5
    count=0 
    while True:
        if (front==mid and end==mid) or (front == mid+1):
            break
        if count==k:
            break
        string_list[front]=1
        string_list[end]=1
        front+=1
        end-=1
        count+=1
    return 
def front_implementation(a,b,k):
    b=b-1
    count=0
    while True:
        string_list[b]=1
        count+=1
        if b==0 or count==k:
            break
        b-=1
    return
def end_implementation(a,b,k,n):
    a+=1
    count=0
    while True:
        string_list[a]=1
        count+=1
        if count==k or a==n-1:
            break 
        a+=1
    return

        


for _ in range(int(input())):
    n,m= map(int, input().split())
    actual_string= input()
    string_list=[]
    for i in range(n):
        x= int(actual_string[i])
        string_list.append(x)
    map_of_1= []
    curr=-2
    if string_list[0]==0:
        curr=-1
    for i in range(n):
        if string_list[i]==1:
            if curr==-1:
                map_of_1.append((curr,i))
                curr=i
            else:
                if curr!=-2:
                    map_of_1.append((curr,i))
                    curr=i
                else:
                    curr=i 
    if string_list[n-1]==0:
        if len(map_of_1)!=0:

            x = len(map_of_1)
            map_of_1.append((map_of_1[x-1][1],-1))
    # print(map_of_1)
    for i in range(len(map_of_1)):
        t= map_of_1[i]
        a= t[0]
        b=t[1]
        if a==-1:
            front_implementation(a,b,m)
        elif b==-1:
            end_implementation(a,b,m,n)
        else:
            implement_central(a,b,m)
    

    for i in range(n):
        print(string_list[i],end="")
    print()
    




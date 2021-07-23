def first_operation(a,b):
    list_of_variables[a]+= list_of_variables[b]
    return
def second_operation(a,b):
    list_of_variables[b]-=list_of_variables[a]
    return
def make_negative_of(a,b):
    first_operation(a,b)
    print("1 "+str(a)+" "+str(b))
    second_operation(a,b)
    print("2 "+str(a)+" "+str(b))
    first_operation(a,b)
    print("1 "+str(a)+" "+str(b))
    second_operation(a,b)
    print("2 "+str(a)+" "+str(b))
    first_operation(a,b)
    print("1 "+str(a)+" "+str(b))
    second_operation(a,b)
    print("2 "+str(a)+" "+str(b))

for _ in range(int(input())):
    n=int(input())
    list_of_variables = list(map(int, input().split()))
    print(n//2*6)
    for i in range(n//2):
        index2= n-1-i 
        make_negative_of(i,index2)



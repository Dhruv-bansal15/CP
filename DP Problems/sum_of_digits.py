from math import pow
def sum_of_digits(num):
    if num//10==0:
        return (num*(num + 1))/2 
    number= str(num)
    n= len(number)
    first_digit= num//int(pow(10,n-1))
    result=0
    sum_= 45*(int(pow(10,n-2)))*(n-1)
    for i in range(first_digit):
        result+= i*(int(pow(10,n-1))) + sum_ 
    left_number= num%(int(pow(10,n-1)))
    result+= first_digit*(left_number + 1)
    result+= sum_of_digits(left_number)
    return result

while True:
    a,b= map(int,input().split())
    if a==-1 and b==-1:
        break 
    c1= sum_of_digits(b)
    c2= sum_of_digits(a-1)
    print(int(c1 - c2))
import math
for i in range(int(input())):
    g=int(input())
    count=0
    
    for n in range(1, int(math.sqrt(2*g)) + 1):
        if (2*g)%n !=0:
            continue
        temp = (2*g)/n + 1 -n
        if temp>0 and temp%2==0:
            count+=1
    print("Case #"+str(i+1)+": "+str(count))
     




T=int(input())
i=1 
while i<=T:
    C,D,L=input().split( )
    C=int(C)
    D=int(D)
    L=int(L)
    if L%4==0:

        if (2*D) >= C:
           if L>=(4*D) and L<= 4*(C+D):
               print("yes")
           else:
            print("no")
        if 2*D < C:
           if L<=4*(C+D) and L>= D*4+(C-(D*2))*4:
              print("yes")
           else:
              print("no")
    else:
        print("no")
    i=i+1 
    
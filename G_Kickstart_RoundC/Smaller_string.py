def power_calculator(k,n):
    if(n==0):
        return 1
    answer = power_calculator(k,n//2)
    answer*= answer
    answer = answer%(1000000007)
    if(n%2 != 0):
        answer = answer*k 
        answer = answer%(1000000007)
    return answer 
def get_pallindromes(word,k,n):
    count=0
    for i in range(0,(n+1)//2):
        obv_answers = (ord(word[i]) - ord("a"))*(power_calculator(k,(n+1)//2 - i - 1))
        count+= obv_answers 
        count%= 1000000007
    left_half = word[:(n+1)//2]
    right_half = left_half[::-1]
    if(n%2==0):
        full_string = left_half + right_half
    else:
        full_string = left_half + right_half[1:]
    if(full_string<word):
        count+= 1
    count%= 1000000007
    return count
for _ in range(int(input())):
    n,k = map(int, input().split())
    word = input()
    result = get_pallindromes(word,k,n)
    print(result)
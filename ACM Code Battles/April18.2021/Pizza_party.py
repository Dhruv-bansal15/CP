for i in range(int(input())):
    latin_word= input()
    dic ={}
    for _ in range(len(latin_word)):
        if latin_word[_] in dic:
            dic[latin_word[_]]+= 1
        else:
            dic[latin_word[_]]=1
    max_key= max(dic, key= dic.get)
    if dic[max_key]== len(latin_word)//2:
        print("YES")
    else:
        print("NO")
        
      
        
import copy


elements_under_mapping= {"a", 'b', 'c', 'd', 'e', 'f', 'g', 'h'}
ans = list()
encrypted= list()
the_real_words = list()
mapping= dict()

n = int(input())
for i in range(0,n):
    x=input()
    the_real_words.append(x)

    

encrypted = list(map(str, input().split()))
copy2 = dict()

def encrypted_data_cracker(i):
    

    if i == len(encrypted):
        ans.append(copy.deepcopy(mapping))

        return    
    
    else:
        
        for j in range(0,len(the_real_words)):
            successful_mapped = False
            elements_that_were_mapped = set()
            
            if len(encrypted[i])==len(the_real_words[j]):
                
                successful_mapped, elements_that_were_mapped = go_for_mapping(encrypted[i], the_real_words[j])
                

            if successful_mapped:
                encrypted_data_cracker(i+1)

            mapping_removed(encrypted[i], elements_that_were_mapped)
            
        return



def go_for_mapping(stra, strb):
    elements_that_were_mapped = set()
    for j in range(len(stra)):
        if stra[j] in mapping.keys() and stra[j] in elements_under_mapping:
            if mapping[stra[j]] != strb[j]:
                return False, elements_that_were_mapped
        else:
            if stra[j] in elements_under_mapping:
                if stra[j] not in mapping.keys() and strb[j] not in mapping.values():
                    mapping[stra[j]] = strb[j]
                    elements_that_were_mapped.add(stra[j])
                else:
                    return False, elements_that_were_mapped

    return True, elements_that_were_mapped




def mapping_removed(words, elements_that_were_mapped):
    for j in range(len(words)):
        if words[j] in mapping and words[j] in elements_that_were_mapped:
            del mapping[words[j]]



encrypted_data_cracker(0)


def encryption_cracker(words):
    if words == 'i':
        return 'i'
    return ans[0][words]

for iter in range(len(encrypted)):
    for temporary in range(len(encrypted[iter])):
        print(encryption_cracker(encrypted[iter][temporary]), end='')

    print(" ", end='')
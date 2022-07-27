stri = input()
Dict = {}
k=0
t=0
ansS=""
Ans = [None]*len(stri)
for i in range(len(stri)):
    if(stri[i] not in Dict.keys()):
        Dict[stri[i]]=1
    else:
        Dict[stri[i]] += 1
ite=0
for i in Dict.keys():
    if(Dict[i]>1):
        for pq in range(Dict[i]//2):
            Ans[ite]=i 
            ite+=1
            Ans[len(stri)-ite]=i
    if(Dict[i]%2==1):
        k+=1 
        Ans[len(stri)//2]=i 
        if(k>1 or len(stri)%2 == 0):
            t=1
            break
if(t==1):
    print("NO SOLUTION")
elif(ite == len(stri)//2 or ite-1 == len(stri)//2):
    for i in Ans:
        ansS+=i
    print(ansS)
else:
    print("NO SOLUTION")
        



        
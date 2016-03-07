t=int(raw_input())
for x in range(t):
    n,m=map(int,raw_input().split())
    l1=[ (i + 1) for i in range(n)]
    l2=[l1[i] for i in range(m)]
    for i in range(m):
        l1.remove(l2[i])
    l3=l1+l2
    l4=[0 for i in range(n)]
    i=0
    while(True):
        l4[i]=1
        i=l3[i]-1
        if(l4[i]==1):
            break
    f=0
    c=0
    for i in l4:
        if i==0:
            f=1
            c+=1
    if(f==0):
        print "Yes"
    else :
        print "No "+str(c)

    
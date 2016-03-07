t=int(raw_input())
for x in range(t):
    c=0
    l=[]
    n=long(raw_input())
    for y in range(n):
        l.append(raw_input())
    for i in range(len(l)-1):
        j=i+1
        while(j<len(l)):
            if(l[i]+l[j]==(l[i]+l[j])[::-1]):
                c+=1
            j+=1
    l=l[::-1]
    for i in range(len(l)-1):
            j=i+1
            while(j<len(l)):
                if(l[i]+l[j]==(l[i]+l[j])[::-1]):
                    c+=1
                j+=1
    print c
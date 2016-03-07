t=int(raw_input())
l=[]
for i in range(t):
    n,f=map(int,raw_input().split())
    s=raw_input()
    l=[int(x) for x in s.split()]
    su,flag=0,0
    l=sorted(l)
    l=l[::-1]
    for j in range(f):
         su+=l[j]
         if(su>=n):
            flag=1
            break

    print "Scenario #"+str(i+1)+":"
    if(flag==1):
        print str(j+1) +'\n'
    else:
        print "impossible" + '\n'
         
        
        
    
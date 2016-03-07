t=int(raw_input())
for x in xrange(t):
    n=int(raw_input())
    l=[int(i) for i in raw_input().split()]
    l1=sorted(l)
    d=0
    f=0
    for i in l1:
       d=l1.index(i)-l.index(i)
       if d>1:
           f=1
    if(f==0):
        print "YES"
    elif f==1:
        print "NO"
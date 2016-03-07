s=raw_input()
t=int(raw_input())
for i in range (t):
    l1,r1,l2,r2=map(int,raw_input().split())
    if s[l1-1:r1:1] == s[l2-1:r2:1]:
        print "Yes"
    else:
        print "No"
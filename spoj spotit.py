
def prog(t):
    for x in range(t):
        n,l=map(int,raw_input().split())
        s=raw_input()
        l1=[]
        i=0
        while i<=n-l :
            s1="0b"
            for j in range(i,i+3):
                s1+=s[j]
            l1.append(int(s1,2))
            i+=1
        print max(l1)
while True:
    try:
        t = int(raw_input())
        prog(t) # next line was found 
    except (EOFError):
        break #end of file reachedt=raw_input()
    


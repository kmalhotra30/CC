#include<bits/stdc++.h>
using namespace std;
#define lli long long int
bool pal(lli n)
{
    lli s=n,d=0;
    while(n!=0)
    {
        d=d*10+n%10;
        n/=10;
    }
    if(s==d)
        return true;
    else
        return false;
}
int main()
{

    lli s[100005];
    s[0]=0;
    for(lli i=1;i<100005;i++)
    {
        s[i]=s[i-1];
        if(pal(i))
            s[i]+=i;
    }
    int t;
    scanf("%d",&t);
    lli l,r;
    while(t--)
    {
        scanf("%d %d",&l,&r);
        printf("%lld\n",s[r]-s[l-1]);
    }

    return 0;
}

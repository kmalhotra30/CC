#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli gcd(lli a,lli b)
{
    if(b==0)
        return a;
    else
        return(b,a%b);
}
int main()
{
    lli t,n,a[10005],m;
    scanf("%lld",&t);
    for(lli x=0;x<t;x++)
    {
        m=0;
        scanf("%lld",&n);
        scanf("%lld",&a[0]);
        for(lli i=1;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]>a[i-1])
                m+=a[i]-a[i-1];

        }
    }
    return 0;
}

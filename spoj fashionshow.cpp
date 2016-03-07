#include<bits/stdc++.h>
using namespace std;
#define lli  long long int
lli a[1005];
lli b[1005];
int main()
{
    lli t;
    scanf("%lld",&t);
    for(lli x=0;x<t;x++)
    {
        lli s=0;
        lli n;
        scanf("%lld",&n);
        for(lli i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for(lli i=0;i<n;i++)
            scanf("%lld",&b[i]);
        for(lli i=0;i<n;i++)
            s+=a[i]*b[i];
        printf("%lld\n",s);
    }
    return 0;
}

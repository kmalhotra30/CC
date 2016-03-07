#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define lli long long int
int main()
{
    lli t,n,k;
    scanf("%lld",&t);
    for(lli x=0;x<t;x++)
    {
        priority_queue <lli> p;
        lli s=0,t;
        scanf("%lld",&n);
        scanf("%lld",&k);
        for(lli i=0;i<n;i++)
        {
            scanf("%lld",&t);
            p.push(t);
        }
        for(lli i =0;i<k;i++)
        {
            s+=p.top();
            t=p.top();
            p.pop();
            p.push(t/2);
        }
        printf("%lld\n",s);

    }
    return 0;
}

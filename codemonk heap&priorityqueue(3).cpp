#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli m ,n,t,s=0;
priority_queue <lli> pq;
int main()
{
    scanf("%lld",&m);
    scanf("%lld",&n);
    for(lli i=1;i<=m;i++)
    {
        scanf("%lld",&t);
        pq.push(t);
    }
    for(lli i=1;i<=n;i++)
    {
        s+=pq.top();
        lli x=pq.top()-1;
        pq.pop();
        pq.push(x);
    }
    cout<<s<<endl;
    return 0;
}

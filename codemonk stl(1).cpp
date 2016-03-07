#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>
#include<set>
#define lli long long int
using namespace std;
lli t,n,m, temp;
vector<lli> a;
set <lli > s;
set <lli> ::iterator it;
int main()
{
    scanf("%lld",&t);
    for(lli x=0;x<t;x++)
    {
        scanf("%lld",&n);
        scanf("%lld",&m);
        for(lli i=0;i<n+m;i++)
        {

            scanf("%lld",&temp);
            a.push_back(temp);
        }
        for(lli i=0;i<n;i++)
            s.insert(a[i]);
        for(lli i=n;i<n+m;i++)
        {
            if(s.find(a[i])==s.end())
                printf("NO\n");
            else
                printf("YES\n");
            s.insert(a[i]);
        }

    }
    return 0;
}

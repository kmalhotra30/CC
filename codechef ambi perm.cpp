#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli n;
    while(1){
    scanf("%lld",&n);
    if(n==0)
        break;
    map <lli,lli> mp;
    lli f=0;
    lli a[100005];
    a[0]=0;
    for(lli i=1;i<n+1;i++)
    {
        scanf("%lld",&a[i]);
        mp.insert(pair <lli,lli> (a[i],i));
    }
    lli b[100005];
    b[0]=0;
    for(lli i=1;i<n+1;i++)
    {
        b[i]=mp[i];
    }
    for(lli i=1;i<n+1 && f==0;i++)
    {
        if(a[i]!=b[i])
            f=1;
    }
    if(f==1)
        printf("not ambiguous\n");
    else if(f==0)
        printf("ambiguous\n");
    }




    return 0;
}

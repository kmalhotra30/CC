#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli n,k,arr[100005],sz[100005],c=0;
lli root(lli arr[],lli i)
{
    while(arr[i]!=i)
    {
        arr[i]=arr[arr[i]];
        i=arr[i];
    }
    return i;
}
void weighted_union(lli arr[],lli sz[],lli a,lli b)
{
    lli roota=root(arr,a);
    lli rootb=root(arr,b);
    if(sz[roota]>=sz[rootb])
    {
        arr[roota]=arr[rootb];
        sz[rootb]+=sz[roota];
    }
    else
    {
        arr[rootb]=arr[roota];
        sz[roota]+=sz[rootb];
    }
}
void init(lli arr[],lli n)
{
    for(lli i=1;i<=n;i++)
    {
        arr[i]=i;
        sz[i]=1;
    }
}
bool fin(lli a,lli b)
{
    if(root(arr,a)==root(arr,b))
        return true;
    else
        return false;
}
int main()
{
    scanf("%lld",&n);
    scanf("%lld",&k);
    lli x,y;
    init(arr,n);
    for(lli i=0;i<k;i++)
    {
        scanf("%lld",&x);
        scanf("%lld",&y);
        weighted_union(arr,sz,y,x);

    }
    for(lli i=1;i<=n;i++)
    {
        if(arr[i]==i)
            c++;
    }
    cout<<c<<endl;

    return 0;
}

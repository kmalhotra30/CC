#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
#define lli long long unsigned int
lli n,q,x,a[100001];
int main()
{
    scanf("%lld",&n);
    scanf("%lld",&q);
    for(lli i=0;i<n;i++)
        scanf("%lld",&a[i]);
    sort(a,a+n);
    for(lli i=0;i<q;i++)
    {
        scanf("%lld",&x);
        if(binary_search(a,a+n, x))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}

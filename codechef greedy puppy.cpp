#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    lli t,n,k;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        scanf("%lld",&k);
        lli a=0;
        for(lli i=1;i<=k;i++)
        {
            if(n%i>a)
                a=n%i;
        }
        cout<<a<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli t,n,c;
    scanf("%lld",&t);
    while(t--)
    {
        c=0;
        scanf("%lld",&n);
        for(lli i=11;i>=0;i--)
        {
            c+=n/pow(2,i);
            n%=(lli)pow(2,i);
        }
        cout<<c<<endl;
    }
    return 0;
}

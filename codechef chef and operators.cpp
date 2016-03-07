#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli t,a,b;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&a);
        scanf("%lld",&b);
        if(a>b)
            cout<<'>'<<endl;
        else if(a<b)
            cout<<'<'<<endl;
        else if(a==b)
            cout<<'='<<endl;
    }
    return 0;
}

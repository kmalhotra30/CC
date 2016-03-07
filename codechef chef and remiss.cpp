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
        lli ma=a>=b ? a:b;
        printf("%lld ",ma);
        printf("%lld",a+b);
    }
    return 0;
}

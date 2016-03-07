#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli gcd(lli a,lli b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
lli lcm(lli a,lli b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    lli t,a,b;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&a);
        scanf("%lld",&b);
        cout<<gcd(a,b)<<' '<<lcm(a,b)<<endl;
    }
    return 0;
}

#include<iostream>
#define ulli unsigned long long int
using namespace std;
ulli n,a[51],g,p,ans=1;
ulli gcd(ulli a,ulli b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    cin>>n;
    ulli p=1;
    for(ulli i=0;i<n;i++)
    {
        cin>>a[i];
        p*=a[i];
        p%=1000000007;
    }
    g=a[0];
    for(ulli i=1;i<n;i++)
    {
        g=gcd(g,a[i]);
    }
    while(g!=0)
    {
        if(g%2==1)
            ans=(ans*p)%1000000007;
        p=(p*p)%1000000007;
        g/=2;
    }
    cout<<ans;
    return 0;
}

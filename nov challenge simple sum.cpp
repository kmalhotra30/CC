#include<iostream>
#include<stdio.h>
#define llui long long unsigned int
using namespace std;
llui gcd(llui a,llui b)
{
    while (a != b)
    {
        if (a > b)
        {
            return gcd(a - b, b);
        }
        else
        {
            return gcd(a, b - a);
        }
    }
    return a;
}
int main()
{
    llui t,n;
    llui sum;
    scanf("%llud",&t);
    for(llui x=0;x<t;x++)
    {
        scanf("%llud",&n);
        sum=0;
        llui i;
        for(i=1;i<=n;i++)
            sum+=n/(gcd(i,n));
        cout<<sum<<endl;
    }
    return 0;
}

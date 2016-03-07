#include<iostream>
#include<stdio.h>
#define lli long long int
using namespace std;
int main()
{
    lli t;
    scanf("%lld",&t);
    for(int i=0;i<t;i++)
    {
        lli n;
        scanf("%lld",&n);
        cout<<(n*(3*n+1)/2)%1000007<<endl;
    }
    return 0;
}

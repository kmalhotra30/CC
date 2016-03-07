#include<stdio.h>
#include<iostream>
#define llui long long unsigned int
using namespace std;
llui rev(llui n)
{
    llui m=0;
    while(n!=0)
    {
        m=m*10 + n%10;
        n/=10;
    }
    return m;
}
int main()
{
    llui t;
    scanf("%llud",&t);
    llui a,b;
    for(int i=0;i<t;i++)
    {
        scanf("%llud",&a);
        scanf("%llud",&b);
        llui s=0;
        s+=rev(a)+rev(b);
        cout<<rev(s)<<endl;

    }
    return 0;
}

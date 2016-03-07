#include<iostream>
#include<stdio.h>
#define lli long long int
using namespace std;
int main()
{
    lli a,b,c;
    while(1)
    {
        scanf("%lld",&a);
        scanf("%lld",&b);
        scanf("%lld",&c);
        if(a==0 && b==0 && c==0)
            break;
        if(c-b==b-a)
            cout<<"AP "<<c+(c-b)<<endl;
        else if(c/b==b/a)
            cout<<"GP "<<c*(c/b)<<endl;

    }
    return 0;
}

#include<stdio.h>
#include<iostream>
#define lli long long int
using namespace std;
int main()
{
    lli n;
    lli x,y;
    scanf("%lld",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&x);
        scanf("%lld",&y);
        if(y%2==0 && x%2==0)
        {
            if(y==x || x==y+2)
                cout<<y+x<<endl;
            else
                cout<<"No Number"<<endl;

        }
        else if(y%2!=0 && x%2!=0)
        {
            if(y==x || x==y+2)
                    cout<<y+x-1<<endl;
            else
                    cout<<"No Number"<<endl;
        }
        else if(y>x || x>y)
            cout<<"No Number"<<endl;
    }
    return 0;
}

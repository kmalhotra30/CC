#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    while(1)
    {
             scanf("%d",&n);
             if(n==0)
                break;
             else
                cout<<(n*(n+1)*(2*n+1))/6<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
#define lli long long int
#include<stdio.h>
lli t;
float q,p,tot;
int main()
{
    cin>>t;
    for(lli x=0;x<t;x++)
    {
        cin>>q>>p;
        tot=q*p;
        if(q>1000)
           tot=0.9*tot;

        printf("%f\n",tot);

    }
    return 0;
}

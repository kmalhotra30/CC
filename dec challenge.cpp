#include<iostream>
#include<stdio.h>
#define lli long long int
#define llui long long unsigned int
lli t,m,n1,n2,i,j,k;
using namespace std;
int main()
{

    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n1);
        scanf("%lld",&n2);
        scanf("%lld",&m);
        for(j=m;j>0;j--)
        {
            if(n1>=j && n2>=j)
            {
                n1-=j;
                n2-=j;
            }
        }
        cout<<n1+n2<<endl;
    }
}

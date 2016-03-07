#include<iostream>
#include<stdio.h>
#include<math.h>
#define llud1 long long unsigned int
using namespace std;
char * prime(llud1 n)
{
    int f=1,j;
    j=sqrt(n);
    if(n==1)
        return 0;
    for(llud1 i=2;i<=j;i++)
        {
            if(n%i==0)
            {
                f=0;
                break;
            }
        }
    if(f==1)
        return "YES";
    else
        return "NO";
}
int main()
{
    llud1 t;
    scanf("%llud",&t);
    for(llud1 i=0;i<t;i++)
    {
            llud1 n;
            scanf("%llud",&n);
            cout<<prime(n)<<endl;
    }
    return 0;
}

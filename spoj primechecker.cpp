#include<iostream>
#include<stdio.h>
#define llud1 long long unsigned int
#define lld long long int
#include<math.h>
using namespace std;
char * prime(llud1 n)
{
    int f=1,j;
    j=sqrt(n);
    if(n==1)
        return false;
    if(n!=2 && n%2 ==0)
        f=0;
    for(int i=3;i<=j;i+=2)
        {
            if(n%i==0)
            {
                f=0;
                break;
            }
        }
    if(f==1)
        return true;
    else
        return false;
}
int main()
{
    int t;
    scanf("%d",&t);
    llud1 n;
    for(int i=0;i<t;i++)
    {
        scanf("%llud",&n);
        cout<<prime(n)<<endl;
    }
    return 0;
}

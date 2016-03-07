#include<iostream>
#include<stdio.h>
#define llud1 long long unsigned int
#define lld long long int
#include<math.h>
int prime(llud1 n)
{
    int f=1,j;
    j=sqrt(n);
    if(n==1)
        return 0;
    if(n!=2 && n%2 ==0)
        f=0;
    for(llud1 i=3;i<=j;i+=2)
        {
            if(n%i==0)
            {
                f=0;
                break;
            }
        }
    if(f==1)
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    llud1 m,n;
    for(int i=0;i<t;i++)
    {
        scanf("%llud",&m);
        scanf("%llud",&n);
        for(llud1 j=m;j<=n;j++)
        {
            if(prime(j)==1)
                printf("%d\n",j);
        }
        printf("\n");
    }
    return 0;
}

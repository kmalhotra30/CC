#include<stdio.h>
#define llui long long unsigned int
int main()
{
    llui t,n,m,x,i;
    scanf("%llud",&t);
    for(x=0;x<t;x++)
    {
        llui a1[1000];
       // llui a3[10000000001]={0};
        scanf("%llud",&n);
        scanf("%llud",&m);
        for(i =0;i<m;i++)
            a1[i]=m+i+1;
            a1[(i+m)]=i+1;
        for(i=0;i<n;i++)
                printf("%d\t",a1[i]);









    }
    return 0;

}

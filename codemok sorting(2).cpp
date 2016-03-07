#include<iostream>
#include<stdio.h>
#define llui long long unsigned int
using namespace std;

int main()
{
    llui t,a[100001],b[100001]={},c,x,n,i,j;
    scanf("%llud",&t);
    for(x=0;x<t;x++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%llud",&a[i]);


        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]<a[i])
                    b[i]++;
            }

        }
        for(i=0;i<n;i++)
            cout<<b[i]<<' ';
        cout<<endl;
    }
    return 0;
}

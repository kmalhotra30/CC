#include<stdio.h>
#include<iostream>
#include<algorithm>
#define llui long long unsigned int
using namespace std;
llui t,n,a[100001],i,j,x,s;
int main()
{
    scanf("%llud",&t);
    for(x=0;x<t;x++)
    {
        s=0;
        scanf("%llud",&n);
        for(i=0;i<n;i++)
            scanf("%llud",&a[i]);
        sort(a,a+n);
        //reverse(a,a+n);
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]>a[i])
                    a[j]-=a[i];
            }
        }
        for(i=0;i<n;i++)
            cout<<a[i]<<' ';
        cout<<s<<endl;
    }
    return 0;
}

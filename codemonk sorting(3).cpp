#include<iostream>
#include<stdio.h>
using namespace std;
#define lli long long unsigned int
lli t,n,m,a[100001],b[100001],c[100001];
int main()
{
    scanf("%lld",&t);
    for(lli z=0;z<t;z++)
    {
        scanf("%lld",&n);
        scanf("%lld",&m);
        for(lli i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for(lli j=0;j<m;j++)
            scanf("%lld",&b[j]);
        lli i=0,j=0,k=0;
        while(i<n && j<m)
        {
            if(a[i]>b[j])
                c[k++]=a[i++];
            else
                c[k++]=b[j++];
        }
        while(i<n)
            c[k++]=a[i++];
        while(j<m)
            c[k++]=b[j++];
        for(lli x=0;x<k;x++)
            cout<<c[x]<<' ';
        cout<<endl;

    }
    return 0;
}

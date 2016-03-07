#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
#define lli long long int
lli t,n,a[100001],b[100001];
int main()
{
    scanf("%lld",&t);
    for(lli x=0;x<t;x++)
    {
        scanf("%lld",&n);
        for(lli i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for(lli i=0;i<n;i++)
            scanf("%lld",&b[i]);
        lli m=0;
        for(lli i=0;i<n;i++)
        {
            lli left=0,right=n-1,pos=0;
            while(left<=right)
            {
                lli mid=(left+right)/2;
                if(b[mid]>=a[i])
                {
                    pos=mid;
                    left=mid+1;
                }
                else
                    right=mid-1;
            }
            m=max(m,pos-i);
        }
        cout<<m<<endl;
    }
    return 0;
}

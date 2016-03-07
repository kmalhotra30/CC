#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[20],pmin,pmax;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        pmin=pmax=a[0];
        for(int i=1;i<n;i++)
        {
            if(pmax==0 && a[i]!=0)
                pmax+=a[i];
            if(a[i]*pmax>pmax)
                pmax*=a[i];
        }
        for(int i=1;i<n && pmin!=0;i++)
        {
            if(a[i]==0)
            {
                pmin=0;break;
            }
            else if(a[i]*pmin<pmin)
                pmin*=a[i];
        }
        cout<<pmax<<' '<<pmin<<endl;
    }
    return 0;
}

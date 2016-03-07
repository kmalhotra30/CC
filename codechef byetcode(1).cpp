#include<bits/stdc++.h>
using namespace std;
int a[10000005];
int main()
{
    int t,n,i,c=0,ma,mi;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        ma=mi=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]>ma)
                ma=a[i];
            if(a[i]<mi)
                mi=a[i];
        }
        c=ma-mi;
        printf("%d\n",c);
    }
    return 0;
}

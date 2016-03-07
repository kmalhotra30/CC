#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    unsigned int n,x,m;
    unsigned int a[100005]={};
    while(t--)
    {
        scanf("%ud",&n);
        scanf("%ud",&x);
        scanf("%ud",&m);
        for(long int i=0;i<n;i++)
        {
            scanf("%ud",&a[i]);
        }
        while(m--)
        {
            for(unsigned int i=1;i<n;i++)
                a[i]=(a[i]%1000000007+a[i-1]%1000000007)%1000000007;
        }
        printf("%ld\n",a[x-1]);

    }
    return 0;
}

#include<bits/stdc++.h>
int main()
{
    int t,n,m,k;
    scanf("%d",&t);
    while(t--)
    {
        int d1;
        scanf("%d",&n);
        scanf("%d",&m);
        scanf("%d",&k);
        if(n>=m)
            d1=n-m;
        else
            d1=m-n;
        if(d1==k || d1<k)
            printf("%d\n",0);
        else if(d1>k)
            printf("%d\n",d1-k);

    }
    return 0;
}

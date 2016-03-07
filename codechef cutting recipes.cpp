#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int t,n,a[51];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        int g=a[0];
        for(int i=1;i<n;i++)
            g=gcd(g,a[i]);
        for(int i=0;i<n;i++)
            a[i]/=g;
        for(int i=0;i<n;i++)
            cout<<a[i]<<' ';
        cout<<endl;
    }

    return 0;
}

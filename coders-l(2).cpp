#include<bits/stdc++.h>
using namespace std;
long long int a[10000000];
int main()
{
    int t,n;
    long long int f;
    a[0]=0;
    a[1]=a[2]=1;
    for(int i=3;i<=10000000;i++)
    {
        a[i%10000003]=(a[i-2]%10000003+a[i-3]%10000003+(i*2)%10000003)%10000003;
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%lld\n",a[n]);
    }

    return 0;
}

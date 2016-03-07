#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    string x;
    lli t,l1,r1,l2,r2,f;
    cin>>x;
    scanf("%lld",&t);
    while(t--)
    {
        f=0;
        scanf("%lld %lld %lld %lld",&l1,&r1,&l2,&r2);
        for(lli i=l1-1,j=l2-1;i<r1 && f==0 && j<r2;i++,j++)
        {
            if(x[i]!=x[j])
            {
                f=1;
                break;
            }
        }
        if(f==1)
            printf("No\n");
        else
            printf("Yes\n");

    }

    return 0;
}

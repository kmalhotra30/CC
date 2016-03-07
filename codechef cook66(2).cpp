#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli t,n;
    scanf("%lld",&t);
    while(t--)
    {
        lli a[50005],b[50005]={};


        scanf("%lld",&n);

        for(lli i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            b[a[i]]++;
        }
        lli s=0,s1=0;
        for(lli i=0;i<50005;i++)
        {
            if(b[i]!=0)
            {
                if(b[i]==1)
                    s1++;
                else
                    s+=b[i]/2;
            }

        }
        cout<<s<<endl;
        s1=s1%2;
        //cout<<s1<<endl;;
        printf("%lld\n",(s+s1));
    }
    return 0;
}

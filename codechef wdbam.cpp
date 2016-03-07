#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli t,n;
    string a,b;
    lli ar[1005];
    while(t--)
    {
        scanf("%lld",&t);
        scanf("%lld",&n);
        cin>>a>>b;
        lli s;
        cin>>s;
        for(lli i=0;i<n;i++)
            scanf("%lld",&ar[i]);
        for(lli i=0;i<a.size();i++)
        {
            if(a[i]==b[i])
            {
                if(ar[i]>=s)
                    s=ar[i];
            }
        }
        cout<<s<<endl;
    }
    return 0;
}

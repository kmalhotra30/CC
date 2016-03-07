#include<iostream>
#include<stdio.h>
using namespace std;
#define lli long long int
int t,n;
lli a,s,p,ar[51],c;
int main()
{
    scanf("%d",&t);
    for(int x=0;x<t;x++)
    {
        scanf("%d",&n);
        s=0;
        p=1;
        c=0;
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&ar[i]);

        }
        for(int i=0;i<n-1;i++)
        {
            s+=ar[i];
            p*=ar[i];
            for(int j=i+1;j<n;j++)
            {
                s+=ar[j];
                p*=ar[j];
                if(s==p)
                    c++;
            }

        }
        cout<<c+n<<endl;
    }
    return 0;
}

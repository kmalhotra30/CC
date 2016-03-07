#include<iostream>
#include<stdio.h>
using namespace std;
#define lli long long unsigned int
lli t,n,m,k,a[201][201],d=0;
void rows(lli b[][201],lli &mini,lli &in,lli n)
{
    lli a[201],s=0;
    for(lli i=0;i<n;i++)
    {
        s=0;
        for(lli j=0;j<n;j++)
            s+=b[i][j];
        a[i]=s;
    }
    mini=a[0];
    for(lli i=1;i<n;i++)
    {
        if(a[i]<=mini)
        {
            mini=a[i];
            in=i;
        }
    }
}
void cols(lli b[][201],lli &mini,lli &in,lli n)
{
    lli a[201],s=0;
    for(lli i=0;i<n;i++)
    {
        s=0;
        for(lli j=0;j<n;j++)
            s+=b[j][i];
        a[i]=s;
    }
    mini=a[0];
    for(lli i=1;i<n;i++)
    {
        if(a[i]<=mini)
        {
            mini=a[i];
            in=i;
        }
    }
}
int main()
{
    scanf("%lld",&t);
    for(lli x=0;x<t;x++)
    {
        d=0;
        scanf("%lld",&n);
        scanf("%lld",&k);
        for(lli i=0;i<n;i++)
        {
            for(lli j=0;j<n;j++)
                scanf("%lld",&a[i][j]);
        }
        lli rmini=0,rin=0,cmini=0,cind=0;
        for(lli z=0;z<k;z++)
        {
            rows(a,rmini,rin,n);
            cols(a,cmini,cind,n);
            if(rmini<=cmini)
            {
                for(lli c=0;c<n;c++)
                {
                    d+=a[rin][c];
                    a[rin][c]+=1;
                }

            }
            else
            {

                for(lli c=0;c<n;c++)
                {
                    d+=a[c][cind];
                    a[c][cind]+=1;
                }
            }
        }

        cout<<d<<endl;

    }
    return 0;
}


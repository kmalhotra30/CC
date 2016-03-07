#include<iostream>
#include<stdio.h>
using namespace std;
int t;
long long unsigned int n,x,a[10000001],s,f;
int main()
{
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
        f=0;
        scanf("%llud",&n);
        scanf("%llud",&x);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(int i=0;i<n && f==0;i++)
        {
            s=0;
            for(int j=i;j<n;j++)
            {
                s+=a[j];
                if(s==x)
                 {
                     f=1;
                     break;
                 }
                if(s>x)
                    break;
            }

        }
        if(f==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;


    }
    return 0;
}

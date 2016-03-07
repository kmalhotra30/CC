#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#define lli long long int
using namespace std;
int main()
{
    lli t,n,x,j,f,a,s,i,flag;
    vector <lli> v;
    scanf("%lld",&t);
    for(x=0;x<t;x++)
    {
        scanf("%lld",&n);
        scanf("%lld",&f);
        for(j=1;j<=f;j++)
        {
            scanf("%lld",&a);
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        s=0,flag=0;
        for(i=0;i<f;i++)
        {
            s+=v[i];
            if(s>=n)
            {
                flag=1;
                break;
            }
            //cout<<v[i]<<endl;
        }
        cout<<"Scenario #"<<x+1<<":"<<endl;
        if(flag==0)
            cout<<"impossible"<<endl<<endl;
        else
            cout<<i+1<<endl<<endl;

    }

    return 0;

}

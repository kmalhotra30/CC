#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli n,s=0,t;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        s+=t;
    }
    lli e=s/2;
    if (e+1==n)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
#define lli long long int
lli t,n,a[100001];
int main()
{
    cin>>t;
    for(lli x=0;x<t;x++)
    {
        cin>>n;
        for(lli i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        lli sum=a[0]+a[1];
        cout<<sum<<endl;

    }
    return 0;
}

#include<iostream>
#include<math.h>
using namespace std;
#define lli long long int
lli a,b,ans=0;
string s;
int main()
{
    cin>>a>>b>>s;

    for(lli i=0;i<s.size();i++)
    {
        if(s[i]=='1')
            ans=(ans+a)%b;
        a=(a*a)%b;

    }
    cout<<ans<<endl;

    return 0;
}

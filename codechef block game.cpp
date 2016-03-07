#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    lli t;
    string n;
    string s=n;
    scanf("%lld",&t);
    while(t--)
    {
        cin>>s;
        reverse(s.begin(),s.end());
        if(n==s)
            cout<<"wins"<<endl;
        else
            cout<<"losses"<<endl;

    }
    return 0;
}

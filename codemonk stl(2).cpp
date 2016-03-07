#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>
#include<set>
#include<string>
#define lli long long int
using namespace std;
lli t,n;
set <string> s;
int main()
{
    scanf("%lld",&t);
    for(lli x=0;x<t;x++)
    {
        scanf("%lld",&n);
        for(lli i=0;i<n;i++)
        {
            string temp;
            cin>>temp;
            s.insert(temp);

        }
        set <string>:: iterator it;
        for(it=s.begin();it!=s.end();++it)
            cout<<*it<<'\n';


    }
    return 0;
}

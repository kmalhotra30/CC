#include<iostream>
#include<map>
#include<string>
#include<stdio.h>
#include<algorithm>
#define lli long long int
#include <bits/stdc++.h>
using namespace std;
int main()
{
    lli n,t;
    string temp;
    vector < pair <lli,string> > v;
    vector < pair <lli,string> > :: iterator it;
    scanf("%lld",&n);
    for(lli x=0;x<n;x++)
    {
        cin>>temp;
        cin>>t;

        v.push_back(pair <lli,string>(t,temp));
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(it=v.begin();it!=v.end();it++)
        cout<<(*it).second<<' '<<(*it).first<<endl;




    return 0;
}

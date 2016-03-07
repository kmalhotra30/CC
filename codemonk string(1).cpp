#include<bits/stdc++.h>
using namespace std;
int main()
{
    set <string> s;
    string x;
    cin>>x;
    for(int i=0;i<x.size();i++)
    {
        for(int j=1;j<=x.size()-i;j++)
        {
            s.insert(x.substr(i,j));
        }
    }
    /*set <string > :: iterator it;
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<endl;
    */
    cout<<s.size()<<endl;
    return 0;
}

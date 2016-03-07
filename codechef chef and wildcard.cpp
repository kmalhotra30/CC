#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string a,b;
    while(t--)
    {
        int f=1;
        cin>>a>>b;
        for(int i=0;i<a.size() && f==1;i++)
        {
            if(a[i]!='?' && b[i]!='?' && a[i]!=b[i])
               f=0;
        }
        if(f==0)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;

    }
    return 0;
}

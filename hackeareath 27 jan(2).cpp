#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin>>x;
    bool flag;
    x[0]-=32;
    for(int i=0;i<x.size()-1;i++)
    {
        if(x[i]=='_')
        {
            if(x[i+1]>='a' && x[i+1]<='z')
                x[i+1]-=32;
        }
    }
    cout<<x<<endl;
    return 0;
}

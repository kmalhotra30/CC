#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    string x;
    cin>>x;
    for(int i=0;i<x.size()-1;i++)
    {
        if(x[i]=='<' && x[i+1]=='3')
            c++;
    }
    cout<<c<<endl;
    return 0;
}

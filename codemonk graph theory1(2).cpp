#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        bool city[100001];
        int x,y,e,c=0;
        cin>>e;
        for(int i=0;i<100001;i++)
            city[i]=false;
        for(int j=1;j<=e;j++)
        {
            cin>>x>>y;
            city[x]=city[y]=true;
        }
        for(int j=1;j<100001;j++)
        {
            if(city[j]==true)
                c++;
        }
        cout<<c<<endl;
    }

    return 0;
}

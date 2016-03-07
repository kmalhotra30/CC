#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
bool vis[1005];
vector <int>adj[1005];
int dfs(int s)
{
    int c=1;
    vis[s]=true;
    for(int i=0;i<adj[s].size();i++)
    {
        if(vis[adj[s][i]]==false)
            c+=dfs(adj[s][i]);

    }
    return c;
}
void init(int n)
{
    for(int i=1;i<=n;i++)
        vis[i]=false;
}
int main()
{
    int t;
    cin>>t;
    for(int z=0;z<t;z++)
    {
        int m=1005;
        int x,y,n,d;
        cin>>n>>d;
        for(int i=0;i<d;i++)
        {
            cin>>x>>y;
            adj[x].push_back(y);

        }
        for(int i=1;i<=n;i++)
        {

            if(vis[i]==false)
            {
                int c=dfs(i);
                if(c<m)
                    m=c;

            }
        }
        cout<<m<<endl;
    }
    return 0;
}

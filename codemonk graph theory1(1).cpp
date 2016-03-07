#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
#define lli long long int
bool vis[100005];
lli a[100005];
lli s;
vector <lli> adj[100005];
void init(lli n)
{
    for(lli i=1;i<=n;i++)
        vis[i]=false;
}
void dfs(lli v)
{
    vis[v]=true;
    s+=a[v];
    for(lli i=0;i<adj[v].size();i++)
    {
        if(vis[adj[v][i]]==false)
        {
            dfs(adj[v][i]);
        }
    }
}
int main()
{
    lli t;
    scanf("%lld",&t);
    for(lli x=0;x<t;x++)
    {
        lli n,m,xc,y,c=0;
        scanf("%lld",&n);
        scanf("%lld",&m);
        for(lli i=0;i<m;i++)
        {
            scanf("%lld",&xc);
            scanf("%lld",&y);
            adj[xc].push_back(y);
            adj[y].push_back(xc);
        }
        for(lli i=1;i<=n;i++)
            scanf("%lld",&a[i]);
        init(n);
        lli ma=0;
        for(lli i=1;i<=n;i++)
        {


            if(vis[i]==false)
            {

                s=0;
                dfs(i);
                c++;
                if(s>ma)
                    ma=s;

            }
            //cout<<s<<endl;


        }
        cout<<ma<<endl;


    }
    return 0;
}

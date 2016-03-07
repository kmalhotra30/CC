#include<bits/stdc++.h>
using namespace std;
int n,a[100005],b[100005];
set <int> s;
int main()
{

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    for(int i=0;i<=n;i++)
    {
        if(b[i]==0)
          s.insert(i);

    }
    set <int> :: iterator it;
    for(it=s.begin();it!=s.end();it++)
        printf("%d ",*it);
    return 0;
}

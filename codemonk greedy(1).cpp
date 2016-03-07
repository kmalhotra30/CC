#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    string w,r;
    for(int i=0;i<t;i++)
    {
        cin>>w;
        cin>>r;
        sort(r.begin(),r.end());
        long long int l=w.size() <=r.size() ? w.size() : r.size();
        //cout<<l<<endl;
        for(long long int i=0,j=0;i<l;i++)
        {
            if(w[i]>r[j])
                w[i]=r[j++];
        }
        cout<<w<<endl;
    }
    return 0;
}

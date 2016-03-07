#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli n;
int main()
{
    priority_queue <int> pq;
    scanf("%lld",&n);
    for(int i=0;i<n;i++)
    {
        lli t;
        cin>>t;
        pq.push(t);
        if(pq.size()<3)
            cout<<"-1"<<endl;
        else
        {
            lli a=pq.top();
            pq.pop();
            lli b=pq.top();
            pq.pop();
            lli c=pq.top();
            pq.pop();
            pq.push(a);
            pq.push(b);
            pq.push(c);
            cout<<a*b*c<<endl;
        }
    }
    return 0;
}

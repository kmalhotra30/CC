#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli q,x,y,a[100005]={};
priority_queue <lli> pql;
priority_queue<int,vector<int>,greater<int> >pqs;
int main()
{
    scanf("%lld",&q);
    for(lli i=0;i<q;i++)
    {
        scanf("%lld",&x);
        if(x==1)
        {
            scanf("%lld",&y);
            a[y]++;
            pql.push(y);
            pqs.push(y);
        }
        if(x==2)
        {
            scanf("%lld",&y);
            if(a[y]!=0)
            {
                a[y]--;
            }
            else
                printf("-1\n");
        }
        if(x==3)
        {
            if(pql.size()==0)
                printf("-1\n");
            else{
            while(a[pql.top()]==0)
                pql.pop();
            printf("%lld",pql.top());
            }

        }
        if(x==4)
        {
            if(pql.size()==0)
                printf("-1\n");
            else{
            while(a[pqs.top()]==0)
                pqs.pop();
            printf("%lld",pqs.top());
            }
        }
    }
    return 0;
}

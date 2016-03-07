#include<iostream>
#include<queue>
using namespace std;
int n,a,t=0;
queue <int> q1,q2;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        q1.push(a);
    }
    for(int i=0;i<n;i++)
    {
        cin>>a;
        q2.push(a);
    }
    while(!q1.empty())
    {
        if(q1.front()!=q2.front())
        {
            q1.push(q1.front());
            q1.pop();
            t++;
        }
        else
        {
            q1.pop();
            q2.pop();
            t++;
        }
    }
    cout<<t<<endl;

    return 0;
}

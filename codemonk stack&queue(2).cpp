#include<iostream>
#include<stack>
using namespace std;
#define lli long long unsigned int
stack <lli> s;
lli q,c,c2;
int main()
{
    cin>>q;
    for(lli i=0;i<q;i++)
    {
        cin>>c;
        if(c==1)
        {
            if(s.empty())
                cout<<"No Food"<<endl;
            else
            {
                cout<<s.top()<<endl;
                s.pop();
            }
        }
        if(c==2)
        {
            cin>>c2;
            s.push(c2);
        }
    }


    return 0;
}

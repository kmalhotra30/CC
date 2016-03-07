#include<iostream>
using namespace std;
#define lli long long int
lli t,n;
int main()
{
    cin>>t;
    for(lli i=0;i<t;i++)
    {
        cin>>n;
        lli c=0;
        while(n!=0)
        {
            lli d=n%10;
            if(d==4)
                c++;
            n/=10;
        }
        cout<<c<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
#define lli long long int
lli n,x,c=0,f=0;
int main()
{
    cin>>n;
    for(lli z=0;z<n;z++)
    {
        cin>>x;
        c=0,f=0;
        for(lli i=1;i*i<=x;i++)
        {
            if(x%i==0)
            {
                if(i*i==x)
                    c+=1;
                else
                    c+=2;
            }
            if(c>=4)
            {
                f=1;
                break;
            }

        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 0;
}

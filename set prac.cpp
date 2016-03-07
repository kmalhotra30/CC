#include<iostream>
#include<set>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int c;
    string s;
    for(int x=0;x<t;x++)
    {
        set <string> se;
        cin>>s;
        for(long long int i=0;i<s.size()-1;i++)
        {
            string s1=s.substr(i,2);
            se.insert(s1);
        }
        cout<<se.size()<<endl;
    }
    return 0;
}

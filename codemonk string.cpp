#include <iostream>
#include<string>
using namespace std;
int t,i;
string s,s1;
int main()
{
    cin>>t;
    for(int x=0;x<t;x++)
    {
       i=0;
       s1="";
       cin>>s;
	   for(i=0;i<s.size()-1;i++)
	   {
	       if(s[i]!=s[i+1])
                s1+=s[i];
	   }
	   s1+=s[s.size()-1];
	   cout<<s1<<endl;
    }

    return 0;
}

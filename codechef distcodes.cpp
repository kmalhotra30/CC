#include<iostream>
#include<string>
#include<stdio.h>
#include<set>
using namespace std;
int t;
string s;
char temp[10001];
int main()
{
    scanf("%d",&t);
    for(int x=0;x<t;x++)
    {
        set <string> se;
        scanf("%s",temp);
        s=temp;
        long long int c=s.size()-1;
        for(long long int i=0;i<s.size()-1;i++)
        {
            string s1=s.substr(i,2);
            string s2=s.substr(i+1);
            se.insert(s1);
        }
        cout<<se.size()<<endl;
    }
    return 0;
}

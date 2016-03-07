#include<iostream>
#include<set>
using namespace std;
int main()
{
    set <int > s;
    int a[]={1,2,2,6,3};
    for(int i=0;i<5;i++)
        s.insert(a[i]);
    set <int> :: iterator it;
    for(it=s.begin();it!=s.end();it++)
        cout<<*it;

    return 0;
}

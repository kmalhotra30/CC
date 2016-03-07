#include<bits/stdc++.h>
using namespace std;
class BearPair
{
    public:
    int bigDistance(string s)
    {
        vector <int> v;
        int f=0;
        for(int i=0;i<s.size()-1;i++)
        {
            for(int j=s.size()-1;j>i;j--)
            {
                if(s[i]!=s[j])
                {
                    f=1;
                    v.push_back(j-i);
                }
            }
        }
        if(f==0)
            return -1;
        else{
            sort(v.begin(),v.end());
            reverse(v.begin(),v.end());
            return v[0];
        }
    }
};
int main()
{
    BearPair b;
    cout<<b.bigDistance("qw");
    return 0;
}

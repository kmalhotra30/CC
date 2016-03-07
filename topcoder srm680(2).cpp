#include<bits/stdc++.h>
using namespace std;
#define lli long long int
vector <lli> v;
class BearChairs
{
    public:

        vector <lli> findPositions(vector <lli> atLeast, lli d)
        {
                lli i,j,f1=0,f2=0,f=0;

                v.insert(v.begin()+atLeast[0],1);
                for(i=1;i<atLeast.size();i++)
                {
                    f2=0;
                    if(v[atLeast[i]]=0)
                    {
                        if(d<atLeast[i])
                            v.insert(v.begin()+d+atLeast[i],1);
                    }
                }
        }

};

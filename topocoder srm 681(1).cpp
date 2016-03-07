#include<bits/stdc++.h>
using namespace std;
class CoinFlipsDiv2
{
public :
    int countCoins(string state)
    {
        int c=0;
        if(state.size()==1)
            return 0;
        else
        {
            if(state[0]!=state[1])
                c++;
            if(state[state.size()-1]!=state[state.size()-2])
                c++;
                for(int i=1;i<=state.size()-2;i++)
                {
                    if(state[i]!=state[i+1] || state[i]!=state[i-1])
                        c++;
                }

        }
        return c;
    }
};
int main()
{
    CoinFlipsDiv2 c;
    cout<<c.countCoins("HHHTTTHHHTTTHTHTH");

    return 0;
}

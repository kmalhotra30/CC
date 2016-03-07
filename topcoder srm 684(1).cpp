#include<bits/stdc++.h>
using namespace std;

class Istr
{
    public:
        int h[200]={};
        int count(string s, int k)
        {
            for(int i='a';i<='z';i++)
                h[i]=0;
            /*for(int i=0;i<s.size();i++)
            {
                h[s[i]]++;
            }*/
            cout<<h['a']<<endl<<cout<<h['b']<<endl;
            for(int i=0;i<k;i++)
            {
                int max=h[97],index=0;;
                for(int j='a';j<='z';j++)
                {
                    if(h[j]>max)
                     {
                         max=h[j];
                         index=j;
                     }
                }
                h[index]--;

            }
            int calc=0;
            for(int i='a';i<='z';i++)
            {
                calc+=pow(h[i],2);
            }
            return calc;

        }

};
int main()
{
    Istr i;
    cout<<i.count("aba",1);


    return 0;
}

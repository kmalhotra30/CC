#include<bits/stdc++.h>
using namespace std;
void zcalc(string x,int  &z [])
{
    z[0]=0;
    int left=0,right=0;

    for(int k=1;k<x.size();k++)
    {
        if(k>right)
        {
            left=right=k;
            while(right<x.size() && x[right]==x[right-left])
            {
                right++;
            }
            z[k]=right-left;
            right--;
        }
        else
        {
            int k1=k-left;
            if(z[k]<right-k+1)
            {
                z[k]=z[k1];
            }
            else
            {
                left=k;
                while(right<x.size() && x[right]==x[right-left])
                {
                    right--;
                }
                z[k]=right-left;
                right--;
            }
        }
    }

}
int main()
{
    int lp;
    set <int> s;
    scanf("%d",&lp);
    string p,t;
    cin>>p;
    cin>>t;
    string aux=p+'$'+t;
    int z[aux.size()];
    zcalc(aux,z);
    if(p.size()<t.size())
    {
        printf("\n");
    }
    else{
    for(int i=0;i<aux.size();i++)
    {
        cout<<z[i]<<endl;
        if(z[i]==p.size())
        {
            s.insert(z[i]);
        }
    }
    if(s.size()==0)
    {
        printf(" \n");
    }
    else
    {
        set <int> :: iterator it;
        for(it=s.begin();it!=s.end();it++)
        {
            printf("%d\n",*it);

        }
        printf("\n");
    }
    }
    return 0;
}

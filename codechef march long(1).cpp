#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    string s1,s2;
    while(t--)
    {
        cin>>s1;
        cin>>s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        string s3,other;
        if(s1.size()<=s2.size())
        {
            s3=s1;
            other=s2;
        }
        else
        {
            s3=s2;
            other=s1;
        }
        int f=0;
        for(int i=0;i<s3.size() && f==0;i++)
        {
            for(int j=0;j<s3.size();j++)
            {
                if(s3[i]==other[j])
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==1)
            printf("Yes\n");
        else
            printf("No\n");

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int x=0;x<t;x++)
    {
        int n;
        scanf("%d",&n);
        string s;
        cin>>s;
        int f=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='Y')
            {
                f=1;
                break;
            }
            if(s[i]=='I')
            {
                f=2;
                break;
            }
        }
            if(f==1)
                printf("NOT INDIAN\n");
            else if(f==2)
                printf("INDIAN\n");
            else if(f==0)
                printf("NOT SURE\n");
        }

    return 0;
}

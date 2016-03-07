#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[30003];
    gets(s);
    s[0]-=32;
    for(int i=1;i<strlen(s);i++)
    {
        if(s[i]==32)
        {
            if(s[i+1]>='a' && s[i+1]<='z')
                s[i+1]-=32;
        }
    }
    cout<<s<<endl;
    return 0;
}

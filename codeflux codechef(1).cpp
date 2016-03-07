#include<bits/stdc++.h>
using namespace std;
int t;
string f,s;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        cin>>f;
        cin>>s;
        transform(f.begin(), f.end(),f.begin(), ::toupper);
        transform(s.begin(), s.end(),s.begin(), ::toupper);
        if(f<s)
            printf("first\n");
        else if(s<f)
            printf("second\n");
        else
            printf("equal\n");
    }
    return 0;
}

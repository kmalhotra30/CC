#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,n3;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    int f;
    n3-=n1;
    int m=n3%(2*n2);
    if(m>=n2)
        f=1;
    else
        f=0;

    if(f==1)
        printf("Unlucky Chef\n");
    else
        printf("Lucky Chef\n");
    return 0;
}

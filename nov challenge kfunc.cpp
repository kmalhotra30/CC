#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
long long unsigned int sum(long long unsigned int a)
{
    if(a==10)
        return 1;
    if(a<=9)
        return a;
    else
    {
        long long unsigned int s=0;
        while(a!=0)
        {
            s+=a%10;
            a/=10;

        }
        return sum(s);
    }

}
int main()
{
    long long unsigned int t,l,a,d,r,s;
    scanf("%llud",&t);
    for(long long unsigned int x=0;x<t;x++)
    {
        s=0;
        scanf("%llud",&a);
        scanf("%llud",&d);
        scanf("%llud",&l);
        scanf("%llud",&r);
        a+=d*(l-1);
        s+=sum((2*a+d*(r-l-1))*(r-l)/2);
        cout<<s<<endl;
    }
    return 0;
}

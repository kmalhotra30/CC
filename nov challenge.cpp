#include<iostream>
#include<stdio.h>
#define llui long long unsigned int
using namespace std;
int main()
{
    llui t,n,m;
    llui a1[100001];
    scanf("%llud",&t);
    llui ac[100001];
    llui a3[100001];
    for(llui x=0;x<t;x++)
    {


        scanf("%llud",&n);
        scanf("%llud",&m);
        for(llui i=0;i<n;i++)
        {
             a1[i]=i+1;
        }
        for(llui i=0;i<m;i++)
        {
            a1[i]=0;
            a3[i]=i+1;
        }
        for(llui i=m;i<n;i++)
            a1[i-m]=a1[i];
        for(llui i=n-m,j=0;j<m;i++,j++)
            a1[i]=a3[j];
        for(llui i=0;i<n;i++)
            ac[i]=0;

        llui i=0,c=0;
        while(ac[i]!=1)
        {
            ac[i]=1;
            c++;
            i=a1[i]-1;
        }
        if(c<n)
            cout<<"No "<<c<<endl;
        else
            cout<<"Yes "<<endl;


    }
    return 0;

}

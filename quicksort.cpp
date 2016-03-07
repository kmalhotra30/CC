#include<iostream>
#include<stdio.h>
#define llui long long unsigned int
int t;
long long unsigned int n,k,a[1001];
using namespace std;
int par(long long unsigned int a[],llui start,long long unsigned int last)
{
    llui i=start+1;
    llui piv=a[start];
    for(llui j=start+1;j<=last;j++)
    {
        if(a[j]<piv)
        {
            llui t=a[j];
            a[j]=a[i];
            a[i]=t;
            i+=1;
        }
    }
    llui t=a[start];
    a[start]=a[i-1];
    a[i-1]=t;
    return i-1;
}
void quicksort(long long unsigned int a[],long long unsigned int start,long long unsigned int last)
{
    if(start<last)
    {
        long long unsigned int pos=par(a,start,last);
        quicksort(a,start,pos-1);
        quicksort(a,pos+1,last);
    }
}
int main()
{
    //llui a[1000001];
    scanf("%d",&t);
    for(int x=0;x<t;x++)
    {
        scanf("%llud",&n);
        for(k=0;k<n;k++)
            scanf("%llud",&a[k]);
        quicksort(a,0,n-1);
        for(k=0;k<n;k++)
            cout<<a[k]<<' ';
        cout<<endl;

    }

    return 0;

}

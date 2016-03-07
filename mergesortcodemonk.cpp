#include<stdio.h>
#include<iostream>
using namespace std;
#define lli long long unsigned int
lli t,n,A[100001];
void merg(lli A[],lli start,lli mid,lli endd)
{
    lli p=start,q=mid+1;
    lli au[endd-start+1],k=0;
    for(lli i=start;i<=endd;i++)
    {
        if(p>mid)
            au[k++]=A[q++];
        else if(q>endd)
            au[k++]=A[p++];
        else if(A[p]>A[q])
            au[k++]=A[p++];
        else
            au[k++]=A[q++];
    }
    for(lli p=0;p<k;p++)
        A[start++]=au[p];
}
void merge_sort(lli A[],lli start,lli endd)
{
    if(start<endd)
    {
        lli mid=(start+endd)/2;
        merge_sort(A,start,mid);
        merge_sort(A,mid+1,endd);
        merg(A,start,mid,endd);
    }
}
int main()
{
    scanf("%lld",&t);
    for(lli x=0;x<t;x++)
    {
        scanf("%lld",&n);
        for(lli i=0;i<n;i++)
            scanf("%lld",&A[i]);
        merge_sort(A,0,n-1);
        for(lli i=0;i<n;i++)
            cout<<A[i]<<' ';
        cout<<endl;
    }
}

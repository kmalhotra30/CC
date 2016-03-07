#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
	lli t;
	scanf("%lld",&t);
	for(lli i=0;i<t;i++)
	{
		lli a,b,c,k;
		scanf("%lld",&a);
		scanf("%lld",&b);
		scanf("%lld",&c);
		scanf("%lld",&k);

		lli left=0, right =100000;
		lli mid,ans=0;
		while(left<=right)
		{
            mid = (left+right)/2;
			if((a*mid*mid + b*mid + c)>= k)
			{
			    ans=mid;
				right = mid-1;
			}
			else
				left = mid+1;
		}
		cout<<ans<<endl;
	}
	return 0;
}

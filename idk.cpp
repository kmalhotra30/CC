#include<bits/stdc++.h>
using namespace std;
class PlaindromePrime
{
	public:
	int  prime(int n)
	{
				int f=1,j;
   				 j=sqrt(n);
   		 if(n==1)
        	return 0;
    if(n!=2 && n%2 ==0)
    	    f=0;
    for(int i=3;i<=j;i+=2)
        {
            if(n%i==0)
            {
                f=0;
                break;
            }
        }
    if(f==1)
        return 1;
    else
        return 0;

	}
	bool pal(int n)
	{
		int s=0,t=n;
		while(n!=0)
		{
			s=10*s+n%10;
			n/=10;
		}
		if(s==t)
			return true;
		else
			return false;
	}
	int count(int L,int R)
	{
		int c=0;
		for(int i=L;i<=R;i++)
		{
			if(prime(i)==1 && pal(i)==true)
				c++;
		}
		return c;
	}
};
int main()
{
    return 0;
}

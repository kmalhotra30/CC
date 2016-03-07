#include<bits/stdc++.h>
using namespace std;
class ListeningSongs
{
	public :
			int listen(vector <int> durations1, vector <int> durations2, int minutes, int T)
			{
				if(durations1.size() < T || durations2.size() < T)
					return -1;
				sort(durations1.begin(),durations1.end());
				sort(durations2.begin(),durations2.end());
				int dur=0;
				int mini=minutes*60;
				int t1=0,t2=0,n=0;
				int i=0,j=0,c=0;
				while(c!=T)
				{
				    if(dur+durations1[i]+durations2[j]<=mini){
					dur+=durations1[i++]+durations2[j++];
					c++;
					n+=2;}
					else
                        return -1;
				}
				int s=0;
				//cout<<n<<'1'<<endl;
				s=durations1[i]<=durations2[j] ? durations1[i] : durations2[j];
				while(dur+s<=mini && (i<durations1.size() || j<durations2.size()))
				{
                    s=durations1[i]<=durations2[j] ? durations1[i] : durations2[j];
                     //s=dur+min(durations1[i],durations2[j]);

					if(durations1[i]<=durations2[j])

					{
					    int t=dur+durations1[i];
                        if(t<=mini)
                        {dur+=durations1[i++];
                            n++;
                        }
					}
					//cout<<n<<'2'<<endl;
					//s=dur+min(durations1[i],durations2[j]);
					//cout<<dur<<endl;
					if(durations2[j]<=durations1[i])
					{
                        int t=dur+durations2[j];
                        if(t<=mini)
						{dur+=durations2[j++];
					//	t2++;
						n++;
						}
					}
                //s=dur+min(durations1[i],durations2[j]);
               // cout<<n<<'3'<<endl;
                //cout<<dur<<endl;
				}

				return n;
			}
};
int main()
{
    ListeningSongs s;
    vector <int> v1;
    vector<int> v2;
    v1.push_back(60);
    v1.push_back(60);
    v1.push_back(60);
    //v1.push_back(120);
    //v1.push_back(120);
    v2.push_back(60);
    v2.push_back(60);
    v2.push_back(60);
    //v2.push_back(60);
    //v2.push_back(60);
    //v2.push_back(60);
    int m=5;
    int t=2;
    int i=s.listen(v1,v2,m,t);
    cout<<i<<endl;
    return 0;
}

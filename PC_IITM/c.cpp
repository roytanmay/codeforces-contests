#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,sum=0,d,maxi=0;
		cin>>n>>k;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			cin>>d;
			v.push_back(d);
		}
		int i=0,j=0;
		while(j<n)
		{
			sum+=v[j];
			if(j-i+1==k)
			 maxi=max(maxi,sum);
			else if(j-i+1>k)
			{
				while(j-i+1>k)
				{
					sum-=v[i];
					i++;
				}
				maxi=max(maxi,sum);
			}
			j++;
		}
		cout<<maxi << endl;
	}
	return 0;
}
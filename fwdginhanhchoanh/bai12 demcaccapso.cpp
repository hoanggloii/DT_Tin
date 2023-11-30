#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("int.inp","r",stdin);
	freopen("int.out","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		int b=k-1;
		int a=1;
		long long tong=0;
		for(;a<b;)
		{
			int k=b-a;
			if(k!=0) tong+=k;
			a++;
			b--;
		}
		cout<<tong<<'\n';
	}
}

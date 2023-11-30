#include <bits/stdc++.h>
using namespace std;
const int N=1E7;
#define ll long long
#define ff first
#define ss second
string ssx(unsigned int n)// ham doi so sang xau
{stringstream ss;
ss<<n;
return ss.str();
}
bool kt(int n)
{
	string s=ssx(n);
	int k=s.length();
	int dem=0;
	for(int i=0; i<k; i++)
		if(s[i]=='8') dem++;
	if(dem>0) return 1;
	else return 0;
}
int main()
{
// ios_base::sync_with_stdio(0);
// cin.tie(0);cout.tie(0);
// freopen(".inp","r",stdin);
// freopen(".out","w",stdout);
	ll n;
	cin>>n;
	int k=0;
	while(1)
	{
		if(n>=0)
		{
			n++;
			k++;
			if(kt(n))
			{
				cout<<k;
				break;
			}
		}
		if(n<0)
		{
			ll l=abs(n);
			l--;
			n++;
			k++;
			if(kt(l))
			{
				cout<<k;
				break;
			}
		}
	}
 return 0;
 }



#include <bits/stdc++.h>
using namespace std;
const int N=1E8;
#define ll long long
#define ff first
#define ss second
string s;
string ssx(unsigned int n)// ham doi so sang xau
{stringstream ss;
ss<<n;
return ss.str();
}
int summ(string s){
	int sum=0;
	int l=s.length();
		for(int i=0;i<l;i++)
			sum+=s[i]-'0';//hoac -48
	return sum;
}
void bien(string s)
{
	int tong =summ(s);
	while(tong > 9)
	{
		tong=summ(ssx(tong));
	}
	cout<<tong;
}
int main()
{
// ios_base::sync_with_stdio(0);
// cin.tie(0);cout.tie(0);
// freopen(".inp","r",stdin);
// freopen(".out","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		cin>>s;
		bien(s);
		cout<<'\n';
	}

 return 0;
 }



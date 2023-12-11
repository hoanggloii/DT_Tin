#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    int k, t;
    scanf("%d", &t);
    if (t == 1)
    {
        scanf("%lld %d", &n, &k);
        vector<int> ans;
        while (n)
        {
            ans.push_back(n % k);
            n /= k;
        }
        reverse(ans.begin(), ans.end());
        for (int x : ans)
            printf("%d", &x);
    }
    else
    {
        string s;
        cin >> s >> k;
        int ans = 0;
        for(int i = 0 ; i < s.length() ; i ++)
        {
            ans = ans*k + s[i] - '0';
        }
        printf("%d",ans);
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie();cout.tie();
//    freopen();
//    freopen();
    int x,n,m;
    std::cin >> x >> n >> m;
    int ti = n*60 + m;
    for(int i = 0;;i++)
    {
        int h = ti /60,m = ti % 60;
        if(h / 10 == 7 || h %10 == 7 || m % 10 == 7 || m /10 == 7)
        {
            std::cout << i << '\n';return 0;
        }
        ti = (ti - x + 1440) % 1440;
    }
    return 0;
}
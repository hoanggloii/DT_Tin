/*
Có N người sắp hàng mua vé dự buổi hoà nhạc. 
Ta đánh số họ từ 1 đến N theo thứ tự đứng trong hàng.
Mỗi người cần mua một vé, song người bán vé được phép bán cho mỗi người tối đa hai vé. 
Vì thế, một số người có thể rời hàng và nhờ người đứng trước mình mua hộ vé. 
Biết  t[i] là thời gian cần thiết để người mua xong vé cho mình. 
Nếu người i rời khỏi hàng và nhờ người i - 1 mua hộ vé thì thời gian để người thứ
i - 1 mua được vé cho cả hai người là r[i-1]
Yêu cầu: Xác định xem những người nào cần rời khỏi hàng và nhờ người đứng trước mua hộ vé để tổng thời gian phục vụ bán vé là nhỏ nhất.
*/



// lib
#include <iostream>
#include <string>
#include <vector>

// define
#define task "task"
#define FOR(j,k,i) for(int i = k ; i <= j ;i++)
#define FIR(j,k,i) for(int i = j ; i >= k ;i--)

// data
using namespace std;
typedef long long ll;
int N;
int t[60005],r[60005],dp[60005];
// function
void solve(){
    scanf("%d",&N);
    FOR(N,1,i) scanf("%d",&t[i]);
    FOR(N-1,1,i) scanf("%d",&r[i]);
    dp[0] = 0;
    dp[1] = t[1];

    FOR(N,2,i){
        dp[i] = min(dp[i-1] + t[i],dp[i-2] + r[i - 1]);
    }
    printf("%d",dp[N]);
}

// main

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen(task".inp","r",stdin);
    freopen(task".out","w",stdout);
    solve();
    return 0;
}

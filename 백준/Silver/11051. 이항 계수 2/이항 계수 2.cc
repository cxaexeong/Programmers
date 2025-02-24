#include <bits/stdc++.h>
using namespace std;

const int MOD = 10007;
int dp[1001][1001]; // DP 테이블

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    cin >> n >> k;

    // DP 테이블 초기화
    for (int i = 0; i <= n; i++) {
        dp[i][0] = dp[i][i] = 1; // nC0 = 1, nCn = 1
        for (int j = 1; j < i; j++) {
            dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) % MOD;
        }
    }
    
    cout << dp[n][k] << '\n';
    return 0;
}

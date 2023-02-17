#include <bits/stdc++.h>

using i64 = int64_t;

int main(void) {
  i64 n;
  std::cin >> n;

  i64 dp[n + 1];
  memset(dp, 0, sizeof(dp));

  dp[0] = 1;

  for (i64 i = 0; i < n; ++i) {
    for (i64 j = i + 1; j <= std::min(i + 6, n); ++j) {
      dp[j] += dp[i];
      dp[j] %= 1000000007;
    }
  }

  std::cout << dp[n] << '\n';
}

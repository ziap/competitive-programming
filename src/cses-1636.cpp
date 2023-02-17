#include <bits/stdc++.h>

using i64 = int64_t;

int main(void) {
  i64 n, x;
  std::cin >> n >> x;

  i64 c[n];
  for (i64 &i : c) {
    std::cin >> i;
  }

  i64 dp[x + 1];
  memset(dp, 0, sizeof(dp));
  dp[0] = 1;

  for (i64 j : c) {
    for (i64 i = 1; i <= x; ++i) {
      if (i - j >= 0) {
        dp[i] += dp[i - j];
        dp[i] %= 1000000007;
      }
    }
  }

  std::cout << dp[x] << '\n';
}

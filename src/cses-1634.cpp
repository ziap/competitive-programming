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
  memset(dp, -1, sizeof(dp));
  dp[0] = 0;

  for (i64 i = 1; i <= x; ++i) {
    for (i64 j : c) {
      if (i - j >= 0 && dp[i - j] >= 0 &&
          (dp[i] < 0 || dp[i] > (dp[i - j] + 1))) {
        dp[i] = dp[i - j] + 1;
      }
    }
  }

  std::cout << dp[x] << '\n';
}

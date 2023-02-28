#include <bits/stdc++.h>

using i64 = int64_t;

int main(void) {
  i64 n;
  std::cin >> n;

  bool a[n * n];

  for (bool &i : a) {
    char x;
    std::cin >> x;
    i = (x == '*');
  }

  i64 dp[n * n];
  memset(dp, 0, sizeof(dp));
  dp[0] = !a[0];

  for (i64 i = 1; i < n * n; ++i) {
    if (a[i])
      continue;

    if (i % n > 0) {
      dp[i] += dp[i - 1];
      dp[i] %= 1000000007;
    }

    if (i / n > 0) {
      dp[i] += dp[i - n];
      dp[i] %= 1000000007;
    }
  }

  std::cout << dp[n * n - 1] << '\n';
}

#include <bits/stdc++.h>

int main(void) {
  int n;
  std::cin >> n;

  int dp[n + 1];
  memset(dp, -1, sizeof(dp));

  dp[0] = 0;

  for (int i = 1; i <= n; ++i) {
    for (int x = i; x; x /= 10) {
      if (x % 10 == 0)
        continue;

      int last = dp[i - (x % 10)] + 1;
      if (dp[i] == -1 || dp[i] > last) {
        dp[i] = last;
      }
    }
  }

  std::cout << dp[n] << '\n';
}

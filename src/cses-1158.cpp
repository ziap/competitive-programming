#include <bits/stdc++.h>

int main(void) {
  int n, x;
  std::cin >> n >> x;

  int h[n], s[n];

  for (int &i : h)
    std::cin >> i;
  for (int &i : s)
    std::cin >> i;

  int dp[x + 1];
  memset(dp, 0, sizeof(dp));

  for (int i = 0; i < n; ++i) {
    for (int j = x; j > 0; --j) {
      if (j >= h[i]) {
        dp[j] = std::max(dp[j], dp[j - h[i]] + s[i]);
      }
    }
  }

  std::cout << dp[x] << '\n';
}

#include <bits/stdc++.h>

using i64 = int64_t;

int main(void) {
  i64 n;
  std::cin >> n;

  i64 p[n];
  for (i64 &i : p) {
    std::cin >> i;
  }

  std::sort(p, p + n);

  i64 t = p[n / 2];
  i64 ans = 0;

  for (auto i : p) {
    ans += std::abs(t - i);
  }

  std::cout << ans << '\n';
}

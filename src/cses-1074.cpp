#include <bits/stdc++.h>

typedef int64_t i64;

int main(void) {
  i64 n;
  std::cin >> n;

  i64 *p = new i64[n];

  for (i64 i = 0; i < n; ++i) {
    std::cin >> p[i];
  }

  std::sort(p, p + n);

  i64 t = p[n / 2];
  i64 ans = 0;

  for (i64 i = 0; i < n; ++i) {
    ans += std::abs(t - p[i]);
  }

  std::cout << ans << '\n';

  delete[] p;
}

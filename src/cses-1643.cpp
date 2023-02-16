#include <bits/stdc++.h>

using i64 = int64_t;

int main(void) {
  i64 n;
  std::cin >> n;

  i64 sum;
  std::cin >> sum;
  i64 max = sum;

  for (i64 i = 1; i < n; ++i) {
    i64 x;
    std::cin >> x;
    sum = std::max(x, sum + x);
    max = std::max(max, sum);
  }

  std::cout << max << '\n';
}

#include <bits/stdc++.h>

typedef int64_t i64;

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

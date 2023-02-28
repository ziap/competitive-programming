#include <bits/stdc++.h>

using i64 = int64_t;

int main(void) {
  i64 n;
  i64 res = 1, mul = 2;

  for (std::cin >> n; n; n >>= 1) {
    if (n & 1) {
      res *= mul;
      res %= 1000000007;
    }

    mul *= mul;
    mul %= 1000000007;
  }

  std::cout << res << '\n';
}

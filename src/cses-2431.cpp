#include <bits/stdc++.h>

using i64 = int64_t;

int main(void) {
  i64 q;
  std::cin >> q;

  for (; q; --q) {
    i64 k;
    std::cin >> k;

    i64 n = 0;
    i64 i = 1;
    i64 e = 1;
    while (true) {
      i64 next = n + 9 * e * i;

      if (next < k) {
        n = next;
        i++;
        e *= 10;
      } else {
        break;
      }
    }

    i64 idx = k - n - 1;
    i64 num = idx / i + e;
    for (i64 off = i - 1 - idx % i; off; --off) {
      num /= 10;
    }

    std::cout << num % 10 << '\n';
  }
}

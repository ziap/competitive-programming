#include <bits/stdc++.h>

int main(void) {
  int n;
  std::cin >> n;

  int res = 0;
  for (int m = 5; m <= n; m *= 5) {
    res += n / m;
  }

  std::cout << res << '\n';
}

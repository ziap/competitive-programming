#include <bits/stdc++.h>

int main(void) {
  int n;
  std::cin >> n;

  int a[n];
  for (int &i : a) {
    std::cin >> i;
  }
  std::sort(a, a + n);

  int res = 1;
  for (int i = 1; i < n; ++i) {
    if (a[i] != a[i - 1])
      res++;
  }

  std::cout << res << '\n';
}

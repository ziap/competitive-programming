#include <bits/stdc++.h>

int main(void) {
  int n;
  std::cin >> n;

  auto a = new std::pair<int, bool>[2 * n];

  for (int i = 0; i < n; ++i) {
    std::cin >> a[2 * i + 0].first;
    std::cin >> a[2 * i + 1].first;

    a[2 * i + 0].second = true;
    a[2 * i + 1].second = false;
  }

  std::sort(a, a + (2 * n));

  int ans = 0;
  int max = 0;

  for (int i = 0; i < 2 * n; ++i) {
    if (a[i].second) {
      ans++;
      max = std::max(max, ans);
    } else {
      ans--;
    }
  }

  std::cout << max << '\n';

  delete[] a;
}

#include <bits/stdc++.h>

int main(void) {
  int n;
  std::cin >> n;

  std::pair<int, bool> a[2 * n];

  for (int i = 0; i < n; ++i) {
    std::cin >> a[2 * i + 0].first;
    std::cin >> a[2 * i + 1].first;

    a[2 * i + 0].second = true;
    a[2 * i + 1].second = false;
  }

  std::sort(a, a + (2 * n));

  int ans = 0;
  int max = 0;

  for (auto i : a) {
    if (i.second) {
      ans++;
      max = std::max(max, ans);
    } else {
      ans--;
    }
  }

  std::cout << max << '\n';
}

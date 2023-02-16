#include <bits/stdc++.h>

int main(void) {
  int n;
  std::cin >> n;

  auto a = new std::pair<int, int>[n];

  for (int i = 0; i < n; ++i) {
    std::cin >> a[i].second >> a[i].first;
  }

  std::sort(a, a + n);

  auto current = a;
  int ans = 1;

  for (auto i = a + 1; i != a + n; ++i) {
    if (i->second >= current->first) {
      current = i;
      ans++;
    }
  }

  std::cout << ans << '\n';

  delete[] a;
}

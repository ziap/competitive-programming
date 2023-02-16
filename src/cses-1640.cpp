#include <bits/stdc++.h>

int main(void) {
  int n, x;
  std::cin >> n >> x;

  std::unordered_map<int, int> m;

  for (int i = 1; i <= n; ++i) {
    int tmp;
    std::cin >> tmp;
    auto found = m.find(x - tmp);
    if (found != m.end()) {
      std::cout << found->second << ' ' << i << '\n';
      return 0;
    }
    m[tmp] = i;
  }

  std::cout << "IMPOSSIBLE\n";
  return 0;
}

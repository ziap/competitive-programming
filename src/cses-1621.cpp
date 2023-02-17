#include <bits/stdc++.h>

int main(void) {
  int n;
  std::cin >> n;

  std::unordered_set<int> s;
  for (int i = 0; i < n; ++i) {
    int x;
    std::cin >> x;
    s.insert(x);
  }

  std::cout << s.size() << '\n';
}

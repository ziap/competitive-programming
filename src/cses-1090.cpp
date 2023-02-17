#include <bits/stdc++.h>

int main(void) {
  int n, x;
  std::cin >> n >> x;

  int p[n];
  for (int &i : p) {
    std::cin >> i;
  }

  std::sort(p, p + n);

  int l = 0;
  int r = n - 1;
  int ans = 0;

  while (l <= r) {
    ans++;
    if (l == r) {
      break;
    }

    if (p[l] + p[r] <= x) {
      l++;
      r--;
    } else {
      r--;
    }
  }

  std::cout << ans << '\n';
}

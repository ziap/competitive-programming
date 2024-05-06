#include <bits/stdc++.h>

constexpr uint32_t EXP = 26;
constexpr uint32_t N = 1 << EXP;
constexpr uint32_t mask = N - 1;
struct {
  uint32_t k;
  uint32_t v;
} hash[N] = {};

constexpr uint32_t MUL = 747796405;

int main(void) {
  uint32_t n, x;
  std::cin >> n >> x;
 
  for (uint32_t i = 0; i < n; ++i) {
    uint32_t tmp;
    std::cin >> tmp;
    uint32_t h = ((tmp * MUL) ^ ((x - tmp) * MUL));
 
    bool insert = true;
    for (h >>= (32 - EXP); hash[h].k != 0; h = (h + 1) & mask) {
      if (hash[h].v == x - tmp) {
        std::cout << hash[h].k << ' ' << i + 1 << '\n';
        return 0;
      }
      if (hash[h].v == tmp) insert = false;
    }
    
    if (insert) hash[h] = {i + 1, tmp};
  }
 
  std::cout << "IMPOSSIBLE\n";
  return 0;
}

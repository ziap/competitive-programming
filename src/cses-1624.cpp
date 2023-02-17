#include <bits/stdc++.h>

using u64 = uint64_t;

struct LUT {
  constexpr LUT() : arr() {
    for (int y = 0; y < 8; ++y) {
      for (int x = 0; x < 8; ++x) {
        u64 mask = 0;

        for (int i = 0; i < 8; ++i) {
          mask |= ((u64)1 << (8 * y + i));
          mask |= ((u64)1 << (8 * i + x));
        }

        int diagx = x - std::min(x, y);
        int diagy = y - std::min(x, y);
        for (int i = 0; i < 8 - std::max(diagx, diagy); ++i) {
          mask |= ((u64)1 << (8 * (diagy + i) + (diagx + i)));
        }

        diagx = x + std::min(7 - x, y);
        diagy = y - std::min(7 - x, y);
        for (int i = 0; i < 8 - std::max(7 - diagx, diagy); ++i) {
          mask |= ((u64)1 << (8 * (diagy + i) + (diagx - i)));
        }

        arr[8 * y + x] = mask;
      }
    }
  }
  u64 arr[64];
};

constexpr LUT lut;
constexpr int solve(u64 b, int y) {
  if (y == 8) {
    return 1;
  }

  int res = 0;
  for (int i = 8 * y; i < 8 * y + 8; ++i) {
    if (!(b & ((u64)1 << i))) {
      res += solve(b | lut.arr[i], y + 1);
    }
  }

  return res;
}

int main(void) {
  u64 board = 0;

  for (int i = 0; i < 64; ++i) {
    char c;
    std::cin >> c;
    board |= ((u64)(c == '*') << i);
  }

  std::cout << solve(board, 0) << '\n';
}

// github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  // o + o == e
  // o + e == o
  // e + e == e

  // must be an even number of odds to divide into two grps.

  int tt; std::cin >> tt;
  while (tt--) {
    int n; std::cin >> n;
    int odd_tracker = 0;
    for (int i=0;i<n;i++) {
      int tmp; std::cin >> tmp;
      odd_tracker ^= tmp;
    }
    (odd_tracker & 1) ? std::cout << "NO\n" : std::cout << "YES\n";
  }

  return 0;
}

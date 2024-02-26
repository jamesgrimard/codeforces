#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; std::cin >> tt;
  while (tt--) {
    int n; std::cin >> n;
    int Q = 0 , winner;
    for (int i=0;i<n;i++) {
      int a,b; std::cin >> a >> b;
      if (a <= 10 && b > Q) {
        Q = b , winner = i + 1;
      }
    }
    std::cout << winner << '\n';
  }

  return 0;
}

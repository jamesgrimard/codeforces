#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; std::cin >> tt;
  while (tt--) {
    int n; std::cin >> n;
    std::string s; std::cin >> s;
    int y = 0 , x = 0; // current location
    bool flag = 0;
    for (int i=0;i<n;i++) {
      if (s[i] == 'U') y++;
      if (s[i] == 'R') x++;
      if (s[i] == 'D') y--;
      if (s[i] == 'L') x--;
      if (y == 1 && x == 1) flag = 1;
    }
    flag ? std::cout << "YES\n" : std::cout << "NO\n";
  }

  return 0;
}

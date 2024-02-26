#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; std::cin >> tt;
  while (tt--) {
    std::string answer = "";
    for (int i=0;i<8;i++) {
      std::string s; std::cin >> s;
      for (int j=0;j<8;j++) {
        if (s[j] != '.') answer+=s[j];
      }
    }
    std::cout << answer << '\n';
  }
  

  return 0;
}

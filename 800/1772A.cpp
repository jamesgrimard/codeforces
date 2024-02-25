#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; std::cin >> tt;

  while (tt--) {
    std::string s; std::cin >> s;
    std::cout<<((s[0]-'0')+(s[2]-'0'))<<'\n';
  }

  return 0;
}

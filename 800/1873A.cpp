#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; std::cin>>tt;

  while (tt--) {
    std::string s; std::cin>>s;
    bool flag = 0;
    for (int i=0;i<s.size();i++) {
      if (s[i] == char(i+97)) {
        flag = 1;
        break;
      }
    }
    (flag) ? std::cout<<"YES\n" : std::cout<<"NO\n";
  }

  return 0;
}

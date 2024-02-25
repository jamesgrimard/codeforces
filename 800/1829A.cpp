#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; std::cin >> tt;
  const char a[] = "codeforces";
  while (tt--) {
    int cnt = 0;
    std::string s; std::cin >> s;
    for (int i=0;i<s.size();i++) {
      if (a[i] != s[i]) cnt++;
    }
    std::cout << cnt << '\n';
  }

  return 0;
}

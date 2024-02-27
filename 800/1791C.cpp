//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int cnt = n;
    string s; cin >> s;
    for (int i=0;i<n/2;i++) {
      if (s[i] != s[n-1-i]) {
        cnt -= 2;
      } else {
        break;
      }
    }
    cout << cnt << '\n';
  }

  return 0;
}


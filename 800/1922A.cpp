//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    string a , b, c; cin >> a >> b >> c;
    bool flag = 0;
    for (int i=0;i<n;i++) {
      if (c[i] != a[i] && c[i] != b[i]) {
        flag = 1;
        break;
      }
    }
    flag ? cout << "YES\n" : cout << "NO\n";
  }

  return 0;
}


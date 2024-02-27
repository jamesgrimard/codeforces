//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    long long sum = 0;
    for (int i=0;i<n;i++) {
      int tmp; cin >> tmp;
      sum += tmp;
    }
    long long l = 1 , r = 1e9 , m;
    while (l < r) {
      m = (l + r) / 2LL;
      if (m * m < sum) {
        l = m + 1LL;
      } else {
        r = m;
      }
    }
    (l*l == sum) ? cout << "YES\n" : cout << "NO\n";
  }

  return 0;
}


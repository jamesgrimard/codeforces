//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int bench, freq = 0;
    bool ans = 1;
    for (int i=0;i<n;i++) {
      int s,e; cin >> s >> e;
      if (i == 0) {
        bench = s;
        freq = e;
      } else {
        if (s >= bench && e >= freq) ans = 0;
      }
    }
    (ans) ? cout << bench << '\n' : cout << -1 << '\n';
  }

  return 0;
}


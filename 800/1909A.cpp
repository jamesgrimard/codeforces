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
    int u = 0,d = 0,l = 0,r = 0;
    for (int i=0;i<n;i++) {
      int x,y; cin >> x >> y;
      if (x > 0) r = 1;
      if (x < 0) l = 1;
      if (y > 0) u = 1;
      if (y < 0) d = 1;
    }
    (u == 1 && d == 1 && l == 1 && r == 1) ? cout << "NO\n" : cout << "YES\n";
  }

  return 0;
}


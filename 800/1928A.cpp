//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();


  int tt; cin >> tt;
  while (tt--) {
    int x,y; cin >> x >> y;
    if (x % 2 == 0 && x / 2 != y) {
      cout << "YES\n";
    } else if (y % 2 == 0 && y / 2 != x) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }


  return 0;
}


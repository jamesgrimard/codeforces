//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--) {
    int a , area;
    for (int i=0;i<4;i++) {
      int x,y; cin >> x >> y;
      if (i == 0) {
        a = x;
      } else {
        if (x != a) area = abs(a-x) * abs(a-x);
      }
    }
    cout << area << '\n';
  }

  return 0;
}


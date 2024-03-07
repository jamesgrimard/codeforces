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
    long long x1 , y1 , x2 , y2; cin >> x1 >> y1 >> x2 >> y2;
    if (y2 >= y1 && x2 <= (x1+abs(y2-y1))) {
      long long k = x1 + abs(y2-y1);
      cout << abs(k - x2) + abs(y2-y1) << '\n';
    } else {
      cout << -1 << '\n';
    }
  }

  return 0;
}


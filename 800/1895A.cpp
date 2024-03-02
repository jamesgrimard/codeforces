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
    int x,y,k; cin >> x >> y >> k;
    if (x < y) {
      x += min(k,y-x);
      cout << y - x + y << '\n';
    } else {
      cout << x << '\n';
    }
  }

  return 0;
}


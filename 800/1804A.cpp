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
    int x,y; cin >> x >> y;
    int k = max(abs(x),abs(y)) - min(abs(y),abs(x));
    cout << max(0,2 * k - 1) + (2 * min(abs(x),abs(y))) << '\n';
  }
  

  

  return 0;
}


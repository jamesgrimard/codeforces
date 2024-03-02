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
    int a , b, c; cin >> a >> b >> c;
    cout << (int) ceil(ceil(abs(a-b)/2.0)/c) << '\n';
  }

  return 0;
}


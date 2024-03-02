//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >>tt;
  while (tt--) {
    int n; cin >> n;
    int sum = 0;
    for (int i=0;i<n-1;i++) {
      int tmp; cin >> tmp;
      sum += tmp;
    }
    cout << sum * -1 << '\n';
  }

  return 0;
}


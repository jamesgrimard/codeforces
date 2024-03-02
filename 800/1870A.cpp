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
    int n,k,x; cin >> n >> k >> x;
    if (k > min(n,x+1)) {
      cout << "-1\n";
    } else {
      int sum = 0;
      bool flag = 0;
      for (int i=0;i<n;i++) {
        if (i == k) flag = 1;
        
        if (flag) {
          (x == k) ? sum += (x-1) : sum += x;
        } else {
          sum += min(i,x);
        }
      }
      cout << sum << '\n';
    }
  }

  return 0;
}


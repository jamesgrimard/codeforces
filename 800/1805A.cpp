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
    int a[8] = {};
    for (int i=0;i<n;i++) {
      int x; cin >> x;
      int b = 1;
      for (int j = 0;j<8;j++) {
        if ((x & b) == b) a[j]++;
        b <<= 1;
      }
    }
    bool flag = 1;
    int ans = 0;
    for (int i=0;i<8;i++) {
      if (a[i] % 2 == 1 && (n - a[i]) % 2 == 1) flag = 0;
      if (a[i] % 2 == 1) ans += pow(2,i);
    }
    (flag) ? cout << ans << '\n' : cout << -1 << '\n';
  }


  

  return 0;
}


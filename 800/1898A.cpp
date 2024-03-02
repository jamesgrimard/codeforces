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
    int n,k; cin >> n >> k;
    string s; cin >> s;
    int a[n+1] = {} , b[n+1] = {};
    for (int i=1;i<=n;i++) {
      a[i] = a[i-1] , b[i] = b[i-1];
      (s[i-1] == 'B') ? b[i]++ : a[i]++;
    }
    if (b[n] == k) {
      cout << "0\n";
    } else if (b[n] > k) {
      for (int i=1;i<=n;i++) {
        if (b[i] == b[n]-k) {
          cout << 1 << '\n' << i << " A\n";
          break;
        }
      }
    } else {
      for (int i=1;i<=n;i++) {
        if (a[i] == k-b[n]) {
          cout << 1 << '\n' << i << " B\n";
          break;
        }
      }
    }    
  }

  return 0;
}


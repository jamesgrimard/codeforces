//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    if (n == 1) {
      cout << 1 << '\n';
    } else if (n == 2) {
      cout << 1 << " " << 2 << '\n';
    } else {
      cout << 3 << " ";
      if (n < 5) cout << 1 << " ";
      for (int i=1;i<=n;i++) {
        if (i == n/2+3) {
          cout << 1 << " ";
        } 
        if (i <= 3) {
          continue;
        } else {
          cout << i << " ";
        }
      }
      cout << 2 << '\n';
    }
  }
  
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


  solve();
 	
  return 0;
}


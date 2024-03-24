//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int n; cin >> n;
  bool ans = 1;
  int a[n]; for (int i=0;i<n;i++) cin >> a[i];

  for (int i=n-2;i>=0;i--) {
    if (a[i] > a[i+1]) {
      int prev = a[i+1];
      while (a[i]/10 > 0) {
        if (a[i] % 10 <= prev) {
          prev = a[i] % 10;
        } else {
          ans = 0;
        }
        a[i]/=10;
      }
      if (a[i] > prev) ans = 0;
    }
  }
  

  (ans) ? cout << "YES\n" : cout << "NO\n";

   
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  int tt; cin >> tt; 
  while (tt--) solve();
 	
  return 0;
}


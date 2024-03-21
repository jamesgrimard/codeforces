//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int a[n]; for (int i=0;i<n;i++) cin >> a[i];
    bool ans = 1;
    for (int i=1;i<n-1;i++) {
      a[i] -= (a[i-1] * 2);
      a[i+1] -= a[i-1];
      a[i-1] = 0;
      if (a[i] < 0 || a[i+1] < 0) ans = 0;
    }
    for (int i=0;i<n;i++) if (a[i] != 0) ans = 0;
    (ans == 0) ? cout << "NO\n" : cout << "YES\n";
  }
  
  
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
	
  return 0;
}

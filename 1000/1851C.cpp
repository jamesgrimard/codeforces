//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n,k; cin >> n >> k;
    int a[n] , r[n] = {}; for (int i=0;i<n;i++) cin >> a[i];
    for (int i=n-1;i>=0;i--) {
      if (i == n-1) {
        r[i] = 1;
      } else {
        r[i] = r[i+1];
        if (a[i] == a[n-1]) r[i]++;
      }
    }
    bool ans = 0;
    if (a[0] == a[n-1] && r[0] >= k) ans = 1;
    int cnt = 0;
    for (int i=0;i<n;i++) {
      if (a[i] == a[0]) {
        cnt++;
        if (cnt >= k && r[i] >= k) ans = 1;
      }
    }
    (ans) ? cout << "YES\n" : cout << "NO\n";
  }
  
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


  solve();
 	
  return 0;
}


//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    bool a[n+1] = {};
    for (int i=1;i<=n;i++) {
      int k = i;
      while (k <= n && a[k] != 1) {
        cout << k << " ";
        a[k] = 1;
        k *= 2;
      }
    }
    cout << '\n';

  }
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


  solve();
 	
  return 0;
}


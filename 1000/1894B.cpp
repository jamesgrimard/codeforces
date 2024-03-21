//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    int n ; cin >> n;
    int cnt = 0;
    int a[n] , c[101] = {}; for (int i=0;i<n;i++) {
      cin >> a[i];
      c[a[i]]++;
    }

    for (int i=0;i<101;i++) if (c[i] >= 2) cnt++;

    if (cnt >= 2) {
      int r[101] = {};
      bool f=0;
      for (int i=0;i<n;i++) {
        if (c[a[i]] >= 2) {
          if (r[a[i]] == 0) {
            r[a[i]] = 1;
            if (f == 0) {
              cout << 1;
              f = 1;
            } else {
              cout << 2;
            }
          } else {
            cout << 3;
          }
        } else {
          cout << 3;
        }
        cout << " ";
      }
      cout << '\n';
    } else {
      cout << -1 << '\n';
    }
  }

  
  
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
 	
  return 0;
}

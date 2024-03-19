//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

long long hcf(long long a , long long b) {
  if (a % b == 0) return b;
  return hcf(b, a % b);
}

void solve() {

  int tt; cin >> tt;

  while (tt--) {

    int n , m , k; cin >> n >> m >> k;

    bool a[k+1] = {}, b[k+1] = {};

    for (int i=0;i<n;i++) {
      int x; cin >> x;
      if (x <= k) a[x] = 1;
    }
    
    for (int i=0;i<m;i++) {
      int x; cin >> x;
      if (x <= k) b[x] = 1;
    }

    int r[k+1] = {} , A = 0 , B = 0;
    
    bool ans = 1;

    for (int i=1;i<=k;i++) {
      if (a[i] == 1 && b[i] == 0) {
        r[i] = 1;
        a[i] = 0;
        A++;
      }
      if (a[i] == 0 && b[i] == 1) {
        r[i] = 2;
        b[i] = 0;
        B++;
      }
    }
    for (int i=1;i<=k;i++) {
      if (a[i] && b[i]) {
        if (A <= B) {
          A++;
          r[i] = 1;
          a[i] = 0;
        } else {
          B++;
          r[i] = 2;
          b[i] = 0;
        }
      }
      if (!r[i] || A > k/2 || B > k/2) ans = 0;
    }
    
    (ans) ? cout << "YES\n" : cout << "NO\n";
  }
  
}


int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
	
  return 0;
}

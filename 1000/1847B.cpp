//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n ;cin >> n;
    int a[n]; 
    for (int i=0;i<n;i++) cin >> a[i];
    
    int tmp = a[0] , cnt = 0;
    for (int i=0;i<n;i++) {
      tmp &= a[i];
      if (tmp == 0) {
        cnt++;
        if (i < n-1) tmp = a[i+1];
      }
    }
    (cnt > 1) ? cout << cnt << '\n' : cout << 1 << '\n';
  }
  
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


  solve();
 	
  return 0;
}


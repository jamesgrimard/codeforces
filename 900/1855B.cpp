//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;



void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    long long n; cin >> n;
    int cnt = 1;
    for (int i=2;i<=n;i++) {
      if (n % i == 0) {
        cnt++;
      } else {
        break;
      }
    }
    cout << cnt << '\n';
  }
  
  
}




int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
    
  return 0;
}

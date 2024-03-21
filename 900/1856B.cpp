//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;



void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    long long cnt1 = 0 , cnt = 0;
    for (int i=0;i<n;i++) {
      int x; cin >> x;
      (x == 1) ? cnt1++ : cnt+=(x-1);
    }
    (cnt1 > cnt || n == 1) ? cout << "NO\n" : cout << "YES\n";
  }

  
  
}




int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
    
  return 0;
}

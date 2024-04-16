// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1943/A
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >>n;
    int cnt[n+1] = {};
    for (int i=0;i<n;i++) {
      int x; cin >> x;
      cnt[x]++;
    }
    bool f = 0;
    int ans = n;
    for (int i=0;i<=n;i++) {
      if (cnt[i] == 0 || (f && cnt[i] == 1)) {
        ans = i;
        break;
      }
      if (cnt[i] == 1) f = 1;
    }

    cout << ans << '\n';
  }


 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();
 	
  return 0;
}
// ----------------------------------------------------------------------------
// NOTES
// ----------------------------------------------------------------------------
/*

*/

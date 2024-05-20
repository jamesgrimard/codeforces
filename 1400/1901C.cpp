// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1903/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  

void solve() {        
  
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    
    vector<int> v,ans;
    int mx , mn;

    for (int i=0;i<n;i++) {
      int x; cin >> x;
      if (i == 0) {
        mx = x;
        mn = x;
      }
      mn = min(mn,x);
      mx = max(mx,x);
    }


    while (mn != mx) {
      if (mx % 2 == 0 && mn % 2) {
        mn++;
        ans.push_back(1);
      } else {
        ans.push_back(0);
      }
      mx /= 2;
      mn /= 2;
    }


    if (!ans.empty() && ans.size() <= n) {
      cout << ans.size() << '\n';
      for (auto &i : ans) cout << i << " ";
      cout << '\n';
    } else {
      cout << ans.size() << '\n';
    }

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
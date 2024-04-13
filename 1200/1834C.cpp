// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// ----------------------------------------------------------------------------
// PROBLEM
// ----------------------------------------------------------------------------
/*

*/
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;

    string a , b; cin >> a >> b;

    int cnt_equal = 0 , cnt_opposite = 0;

    for (int i=0;i<n;i++) {
      if (a[i] != b[n-1-i]) cnt_opposite++;
      if (a[i] != b[i]) cnt_equal++;
    }

    cout << min(cnt_equal * 2 - (cnt_equal & 1) , max(2,cnt_opposite * 2 - 1 + (cnt_opposite & 1))) << '\n';

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

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
    vector<int> a;
    for (int i=0;i<n;i++) {
      int x; cin >> x;
      if (i == 0 || x != a.back()) a.push_back(x);
    }
    int cnt = 1;
    for (int i=1;i<a.size();i++) {
      if (i != a.size()-1 && a[i] > a[i-1] && a[i] > a[i+1]) cnt++;
      if (i != a.size()-1 && a[i] < a[i-1] && a[i] < a[i+1]) cnt++;
      if (i == a.size()-1 && a[i] != a[i-1]) cnt++;
    }
    cout << cnt << '\n';
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

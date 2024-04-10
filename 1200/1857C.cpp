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
    map<long long,int> m;
    int ref = n - 1;
    for (int i=0;i<n*(n-1)/2;i++) {
      long long x; cin >> x;
      m[x]++;
    }
    for (auto &x:m) { 
      while (x.second) {
        cout << x.first << " ";
        x.second -= ref;
        ref--;
      }
    }
    auto last = m.rbegin();
    cout << last->first << '\n';
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

// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1965/A
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
    map<int,bool> m;
    for (int i=1;i<=n;i++) {
      int x; cin >> x;
      if (m[x]) continue;
      m[x] = 1;
      a.push_back(x);
    }

    n = a.size();
    int winner = n % 2;

    a.push_back(0);
    sort(a.begin() , a.end());

    for (int i=1;i<=n;i++) {
      if (a[i] != i) {
        winner = i % 2;
        break;
      }
    }

    (winner) ? cout << "Alice\n" : cout << "Bob\n";

    
    
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
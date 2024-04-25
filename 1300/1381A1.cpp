// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1381/A1
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                     
void solve() {
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    string a, b; cin >> b >> a;

    vector<int> v;
    int L = 0 , R = n-1 , cnt = 0;
    for (int i=n-1;i>=0;i--) {
      if (cnt % 2 == 0) {
        if (a[i] == b[R]) {
          R--;
          continue;
        }
        if (b[L] != b[R]) v.push_back(1);
        v.push_back(i+1);
        L++;
      } else {
        if (a[i] == (b[L] ^ 1)) {
          L++;
          continue;
        }
        if (b[R] != b[L]) v.push_back(1);
        v.push_back(i+1);
        R--;
      }
      cnt++;
    }
    cout << v.size() << " ";
    for (auto &i : v) cout << i << " ";
    cout << '\n';
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
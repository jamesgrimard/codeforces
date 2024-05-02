// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1238/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

void solve() {    

  int tt; cin >> tt;
  while (tt--) {
    int n , r; cin >> n >> r;
    int ref[100001] = {};
    vector<int> a;
    for (int i=0;i<n;i++) {
      int x; cin >> x;
      if (!ref[x]) {
        ref[x] = 1;
        a.push_back(x);
      }
    }
    sort(a.begin(),a.end());
    int R = 0;
    for (int i=a.size()-1;i>=0;i--) {
      if (a[i] <= R) break;
      if (a[i] > R) R += r;
    }
    cout << R / r << '\n';
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
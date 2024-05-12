// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1005/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
  
using namespace std;
  
void solve() {
  
  
  
  int n; cin >> n;
  int a[n];
  map<int,int> m;
  for (int i=0;i<n;i++) {
    cin >> a[i];
    m[a[i]]++;
  }
   

  bool r[n] = {};
  int cnt = 0;
  
  for (int i=0;i<n;i++) {
    int x;
    bool f = 0;
    for (int j=0;j<=30;j++) {
      x = (1<<j) - a[i];
      if ((m[x] && a[i] != x) || (a[i] == x && m[x] > 1)) {
        f = 1;
        break;  
      }
    }
    if (!f) cnt++;
  }
  
  cout << cnt << '\n';
  
  
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
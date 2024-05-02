// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1237/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

void solve() {    

  int n; cin >> n;
  int a[n] , b[n];
  for (int i=0;i<n;i++) cin >> a[i];
  for (int i=0;i<n;i++) cin >> b[i];

  map<int,bool> m;
  int I = 0;

  for (int i=0;i<n;i++) {
    if (m[a[I]] || a[I] == b[i]) {
      I++;
      while (I < n-1 && m[a[I]]) I++;
      continue;
    }
    m[b[i]] = 1;
  }

  int cnt = 0;
  for (auto &i : m) if (i.second) cnt++;
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
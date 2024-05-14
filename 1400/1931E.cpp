// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1931/E
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
  
using namespace std;
 
void solve() {
  int tt; cin >> tt;
  while (tt--) {
    int n , m; cin >> n >> m;
    int a[n] = {};
    int total = 0;
    for (int i=0;i<n;i++) {
      string s; cin >> s;
      total += s.size();
      int cnt = 0;
      for (int j=s.size()-1;j>=0;j--) {
        if (s[j] == '0') {
          cnt++;
          continue;
        }
        break;
      }
      a[i] = cnt;
    }
    sort(a,a+n);
    for (int i=n-1;i>=0;i-=2) total -= a[i];
    (total <= m) ? cout << "Anna\n" : cout << "Sasha\n";
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
// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1857/D
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
            
void solve() {
 
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    long long a[n] , b[n];
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<n;i++) cin >> b[i];

    bool ref[n] = {}, f = 0;
    long long buffer;
    int cnt = 0;

    for (int i=0;i<n;i++) {
      if ((f && a[i] - b[i] >= buffer) || ref[i]) continue;
      for (int j=i+1;j<n;j++) {
        if (a[i] - a[j] > b[i] - b[j]) {
          ref[j] = 1;
        }
        if (a[i] - a[j] < b[i] - b[j]) {
          ref[i] = 1;
          break;
        }
      }
      if (!ref[i]) {
        if (!f) {
          buffer = a[i] - b[i];
          f = 1;
        }
        buffer = min(buffer,a[i]-b[i]);
      }
    }
    for (int i=0;i<n;i++) if (!ref[i]) cnt++;
    cout << cnt << '\n';
    for (int i=0;i<n;i++) if (!ref[i]) cout << i + 1 << " ";
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
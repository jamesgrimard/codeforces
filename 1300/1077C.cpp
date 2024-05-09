// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1077/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        


  int n; cin >> n;
  int a[n];
  for (int i=0;i<n;i++) cin >> a[i];


  long long total = 0 , mx = 0 , mx2 = 0;
  for (int i=0;i<n;i++) {
    total += a[i];
    if (a[i] >= mx) {
      mx2 = mx;
      mx = a[i];
    } else if (a[i] > mx2) {
      mx2 = a[i];
    }
  }


  int cnt = 0;
  bool r[n] = {};
  for (int i=0;i<n;i++) {
    long long temp = total - (long long) a[i];
    if (a[i] == mx) {
      if (temp - mx2 == mx2) {
        cnt++;
        r[i] = 1;
      }
    } else {
      if (temp - mx == mx) {
        cnt++;
        r[i] = 1;
      }
    }
  }


  cout << cnt << '\n';
  for (int i=0;i<n;i++) if (r[i]) cout << i + 1 << " ";


  





                                                                                          
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
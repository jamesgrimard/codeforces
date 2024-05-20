// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1903/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  

void solve() {        
  
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;

    long long a[n];
    for (int i=0;i<n;i++) cin >> a[i];

    long long s[n];
    for (int i=n-1;i>=0;i--) {
      s[i] = a[i];
      if (i != n-1) s[i] += s[i+1];
    }

    long long total = 0, cur = 0 , p = 1;
    for (int i=0;i<n;i++) {
      cur += a[i];
      if (i == n-1 || s[i+1] >= 0) {
        total += cur * p;
        p++;
        cur = 0;
      }
    }

    cout << total << '\n';




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
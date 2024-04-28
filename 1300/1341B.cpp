// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1341/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

void solve() {
  int tt; cin >> tt;
  while (tt--) {
    int n , k; cin >> n >> k;

    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];

    int b[n] = {};
    for (int i=1;i<n;i++) {
      b[i] = b[i-1];
      if (i != n-1 && a[i] > a[i-1] && a[i] > a[i+1]) b[i]++;
    }

    int mx = 0 , l = 1;
    for (int i=k-1;i<n;i++) {
      if (b[i-1]-b[i-(k-1)] > mx) {
        mx = b[i-1] - b[i-(k-1)];
        l = i - (k-1) + 1;
      }
    }

    cout << mx + 1 << " " << l << '\n';
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
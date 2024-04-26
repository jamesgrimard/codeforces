// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1367/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                                 
void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n , k; cin >>n >> k;
    string s; cin >> s;
    int total = 0;
    int a[n] = {} , b[n] = {};
    a[0] = n + 1 , b[n-1] = n + 1;
    for (int i=0;i<n;i++) {
      if (s[i] == '1') {
        a[i] = 0;
        continue;
      }
      if (i) a[i] = a[i-1] + 1;
    }
    for (int i=n-1;i>=0;i--) {
      if (s[i] == '1') {
        b[i] = 0;
        continue;
      }
      if (i < n-1) b[i] = b[i+1] + 1;
    }
    int prev = -1 * (n + 1);
    for (int i=0;i<n;i++) {
      if (min(i-prev,min(a[i],b[i])) > k) {
        total++;
        prev = i;
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
// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1373/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                     
void solve() {
  
  int tt; cin >> tt;
  while (tt--) {

  string s; cin >> s;
  int n = s.size();
  int a[n] = {};
  for (int i=0;i<n;i++) {
    if (i) a[i] = a[i-1];
    (s[i] == '+') ? a[i]++ : a[i]--;
  }

  long long cnt = 0;
  int prev = 0;

  for (int i=0;i<n;i++) {
    if (a[i] * -1 > prev) {
      cnt += ( a[i] * -1 - prev ) * (i + 1);
      prev = a[i] * -1;
    }
  }
  cout << cnt + (long long) n << '\n';
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
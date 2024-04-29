// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1328/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

void solve() {
 int tt; cin >> tt;
 while (tt--) {
  long long n , k; cin >> n >> k;
  long long L = 1 , R = n , M , P;
  while (L <= R) {
    M = (L + R) / 2LL;
    P = M * (M - 1LL) / 2LL;
    if (P > k) R = M - 1;
    if (P < k) L = M + 1;
    if (P == k) {
      L = M;
      break;
    }
  }
  long long remainder = k - ((L-1LL) * (L-2LL) / 2LL);
  for (int i=0;i<n;i++) (i == n - L || i == n - remainder) ? cout << 'b' : cout << 'a';
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
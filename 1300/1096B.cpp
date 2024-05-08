// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1096/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  int n; cin >> n;
  string s; cin >> s;

  int L = 0 , R = 0;
  for (int i=0;i<n;i++) {
    if (i && s[i] != s[i-1]) break;
    L++;
  }
  for (int i=n-1;i>=0;i--) {
    if (i != n-1 && s[i] != s[i+1]) break;
    R++;
  }

  (s[0] == s[n-1]) ? cout << ((long long) (L + 1) * (long long) (R + 1)) % 998244353 : cout << (L + R + 1) % 998244353;
                                                                                           
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
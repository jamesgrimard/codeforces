// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1178/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  string s; cin >> s;
  int n = s.size();
  int L[n] = {}, R[n] = {};

  int cnt = 0;
  for (int i=1;i<n;i++) {
    if (s[i] == 'v' && s[i-1] == 'v') cnt++;
    L[i] = cnt;
  }

  cnt = 0;
  for (int i=n-2;i>=0;i--) {
    if (s[i] == 'v' && s[i+1] == 'v') cnt++;
    R[i] = cnt;
  }

  long long total = 0;

  for (int i=0;i<n;i++) {
    if (s[i] == 'o') total += (long long) L[i] * (long long) R[i];
  }

  cout << total << '\n';

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
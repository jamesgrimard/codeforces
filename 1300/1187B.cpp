// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1187/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
    
void solve() {    
  int n ; cin >> n;

  string s; cin >> s;
  vector<vector<int>> a(26);
  
  for (int i=0;i<n;i++) a[s[i]-97].push_back(i+1);

  int q; cin >> q;

  while (q--) {
    string S; cin >> S;
    int mx = 1 , N = S.size();
    int r[26] = {};
    for (int i=0;i<N;i++) {
      mx = max(mx,a[S[i]-97][r[S[i]-97]]);
      r[S[i]-97]++;
    }
    cout << mx << '\n';
    
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
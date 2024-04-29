// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1315/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

void solve() {
  int tt; cin >> tt;
  while (tt--) {
    int a , b , p; cin >> a >> b >> p;
    string s; cin >> s;
    int n = s.size() , cnt[n] = {};
    
    for (int i=n-1;i>=1;i--) {
      if ((i == n-1 && s[i] == s[i-1]) || s[i] != s[i-1]) {
        (s[i-1] == 'A') ? cnt[i] = a : cnt[i] = b;      
      } 
    }
    
    int I = n;

    for (int i=n-1;i>=0;i--) {
      if (cnt[i] > p || i == 0) {
        I = i + 1;
        break;
      }
      p -= cnt[i];
    }

    cout << I << '\n';
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
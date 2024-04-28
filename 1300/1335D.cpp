// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1335/D
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                                 
void solve() {
  int tt; cin >> tt;
  while (tt--) {
    string a[9];
    for (int i=0;i<9;i++) {
      cin >> a[i];
      int k = a[i][i*3%9+(i/3)] - '0';
      k++;
      k %= 9;
      (!k) ? a[i][i*3%9+(i/3)] = '9' : a[i][i*3%9+(i/3)] = char(k+48);
    }
    
    for (auto &i : a) {
      for (auto &j : i) cout << j;
      cout << '\n';
    }
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
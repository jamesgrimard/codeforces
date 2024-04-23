// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1846/E1
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                     
void solve() {
  
  map<int,bool> m;
  for (int i=2;i<=1000;i++) {
    int p = 0 , j = 0;
    while (p <= 1e6) {
      p += pow(i,j);
      j++;
      if (j > 2) m[p] = 1;
    }
  }

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    (m[n]) ? cout << "YES\n" : cout << "NO\n";
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
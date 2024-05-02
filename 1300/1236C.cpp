// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1236/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

void solve() {    
  
  int n; cin >> n;

  int a[n][n];

  for (int i=0;i<n;i++) {
    if (i % 2 == 0) {
      for (int j=0;j<n;j++) a[j][i] = i * n + (j + 1); 
    } else {
      for (int j=n-1;j>=0;j--) a[j][i] = i * n + ((n-1)-j+1);      
    }
  }

  for (auto &i : a) {
    for (auto &j : i) cout << j << " ";
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
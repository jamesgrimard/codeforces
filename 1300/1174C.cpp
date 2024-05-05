// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1174/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
                      
  int n; cin >> n;
  int a[n+1] = {} , cnt = 1;
  for (int i=2;i<=n;i++) {
    if (!a[i]) {
      int k = i;
      while (k <= n) {
        if (!a[k]) a[k] = cnt;
        k += i;
      }
      cnt++;
    }      
  }
  for (int i=2;i<=n;i++) cout << a[i] << " ";
  






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
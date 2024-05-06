// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1157/C1
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  int n; cin >> n;
  int a[n];
  for (int i=0;i<n;i++) cin >> a[i];
  
  int p = 0 , L = 0 , R = n-1;
  vector<char> v;

  while ( L <= R ) {

    if (a[L] <= p && a[R] <= p) break;
    if (a[L] > p && a[R] > p) {
      if (a[L] < a[R]) {
        v.push_back('L');
        p = a[L];
        L++;
      } else {
        v.push_back('R');
        p = a[R];
        R--;
      }
    } else {
      if (a[L] > a[R]) {
        v.push_back('L');
        p = a[L];  
        L++;
      } else {
        v.push_back('R');
        p = a[R];
        R--;
      }
    }
  }

  cout << v.size() << '\n';
  if (v.size()) for (auto &i : v) cout << i;
  cout << '\n';

  


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
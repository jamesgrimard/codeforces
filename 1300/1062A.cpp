// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1062/A
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  int n; cin >> n;
  int a[n];

  vector<int> r(n,1);
  for (int i=0;i<n;i++) {
    cin >> a[i];
    if (!i) continue;
    if (a[i] == a[i-1] + 1) r[i] = r[i-1] + 1;
  }

  int mx = 0;                                    
  for (int i=0;i<n;i++) {
    if (a[i] != i + 1) r[i]--;
    if (i != n-1 || a[i] != 1000) r[i]--;
    mx = max(mx,r[i]);
  }

  cout << mx << '\n';


                                                                                          
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
// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1093/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        

  int n; cin >> n;
  long long a[n] = {};

  for (int i=0;i<n/2;i++) {
    long long x; cin >> x;
    if (i == 0) {
      a[i] = 0 , a[n-1-i] = x;
      continue;
    }
    if (x - a[i-1] <= a[n-1-i+1]) {
      a[i] = a[i-1] , a[n-1-i] = x - a[i-1];
    } else {
      a[n-1-i] = a[n-1-i+1] , a[i] = x - a[n-1-i+1];
    }
  }
  
  for (auto &i : a) cout << i << " ";



                                                                                          
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
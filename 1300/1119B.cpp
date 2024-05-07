// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1119/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  
  int n , k; cin >> n >> k;
  int a[n];
  for (int i=0;i<n;i++) cin >> a[i];

  int ans = 1;
  for (int i=1;i<n;i++) {
    for (int j=i;j>=1;j--) {
      if (a[j] < a[j-1]) {
        swap(a[j],a[j-1]);
      } else {
        break;
      }        
    }
    int h = 0;
    for (int j=i;j>=0;j-=2) h += a[j];
                            
    if (h <= k) {
      ans = i + 1;
    } else {
      break;
    }

  }
  cout << ans << '\n';


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
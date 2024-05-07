// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1113/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  int n; cin >> n;
  int a[n],mn,total=0;
  for (int i=0;i<n;i++) {
    cin >> a[i];
    if (i == 0) mn = a[i];
    mn = min(a[i],mn);
    total += a[i];
  }
  int ans = total , A , B;
  for (int i=0;i<n;i++) {
    if (a[i] == mn) continue;
    for (int j=(int) sqrt(a[i]);j>=2;j--) {
      if (a[i] % j == 0) {
        A = a[i] / j;
        B = mn * j;
        ans = min(ans,total-a[i]+A-mn+B);
      }
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
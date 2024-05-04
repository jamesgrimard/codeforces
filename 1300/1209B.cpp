// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1209/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
    
void solve() {        
  
  int n; cin >> n;
  string s; cin >> s;

  bool A[n][1001] = {};
  for (int i=0;i<n;i++) if (s[i] == '1') A[i][0] = 1;

  for (int i=0;i<n;i++) {
    int a, b; cin >> a >> b;
    int c = 0;
    for (int j=1;j<=1000;j++) {
      if (j % (b + c * a) == 0) {
        A[i][j] = !A[i][j-1];
        c++;
      } else {
        A[i][j] = A[i][j-1];
      }
    }
  }
  int mx = 1 , cnt;
  for (int i=0;i<=1000;i++) {
    cnt = 0;
    for (int j=0;j<n;j++) cnt+=A[j][i];
    mx = max(mx,cnt);
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
// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1108/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
    
  int n; cin >> n;
  string s; cin >> s;

  vector<vector<int>> a(6);
  // R G B
  a[0] = {0,1,2};
  a[1] = {0,2,1};
  a[2] = {1,0,2};
  a[3] = {2,0,1};
  a[4] = {1,2,0};
  a[5] = {2,1,0};

  int mn = n;
  string ans = s;
  for (int i=0;i<6;i++) {
    int cnt = 0;
    string S = s;
    for (int j=0;j<n;j++) {
      bool f = 0;
      if (S[j] == 'R') {
        if (j % 3 != a[i][0]) {
          cnt++;
          f = 1;
        }
      } else if (S[j] == 'G') {
        if (j % 3 != a[i][1]) {
          cnt++;      
          f = 1;
        }
      } else {
        if (j % 3 != a[i][2]) {
          cnt++;
          f = 1;
        }
      }
      if (f) {
        for (int k=0;k<3;k++) {
          if (a[i][k] == j % 3) {
            if (k == 0) S[j] = 'R';
            if (k == 1) S[j] = 'G';
            if (k == 2) S[j] = 'B';
          }
        }
      }     
    }
    
    if (cnt < mn) {
      mn = cnt;
      ans = S;
    }
  }
  cout << mn << '\n';
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
// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1422/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                     
void solve() {
 
  int tt; cin >> tt;
  while (tt--) {
    int n,m; cin >> n >> m;
    int a[n][m];
    for (int i=0;i<n;i++) for (int j=0;j<m;j++) cin >> a[i][j];

    long long cnt = 0;

    for (int i=0;i<n/2+(n&1);i++) {
      for (int j=0;j<m/2+(m&1);j++) {
        vector<int> H;
        H.push_back(a[i][j]);
        if (i != n/2) {
          H.push_back(a[n-1-i][j]);
        }
        if (j != m/2) {
          H.push_back(a[i][m-1-j]);
          if (i != n/2) H.push_back(a[n-1-i][m-1-j]);
        }
        sort(H.begin(),H.end());
        for (int k=0;k<H.size();k++) {
          cnt += abs(H[k]-H[H.size()/2]);
        }
        
      }
    }

    cout << cnt << '\n';
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
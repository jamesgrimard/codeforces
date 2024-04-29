// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1311/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    int n,m; cin >> n >> m;
    string s; cin >>s;
    int a[n] = {} , cnt[26] = {};
    for (int i=0;i<m;i++) {
      int x; cin>> x;
      a[x-1]++;
    }

    a[n-1]++;
    cnt[s[n-1]-97] = a[n-1];

    for (int i=n-2;i>=0;i--) {
      a[i] += a[i+1];
      cnt[s[i]-97] += a[i];
    }

    for (auto &i : cnt) cout << i << " ";
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
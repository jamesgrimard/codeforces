// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1271/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

void solve() {
  int n , sx , sy; cin >> n >> sx >> sy;

  int a[4] = {};

  for (int i=0;i<n;i++) {
    int hx, hy; cin >> hx >> hy;
    if (hy < sy && hx < sx) {a[3]++,a[2]++;}
    if (hy > sy && hx < sx) {a[3]++,a[0]++;}
    if (hy < sy && hx > sx) {a[1]++,a[2]++;}
    if (hy > sy && hx > sx) {a[0]++,a[1]++;}
    if (hy == sy) (hx < sx) ? a[3]++ : a[1]++;
    if (hx == sx) (hy < sy) ? a[2]++ : a[0]++;
  }
  int I = 0 , mx = 0;
  for (int i=0;i<4;i++) {
    if (a[i] >= mx) {
      mx = a[i];
      I = i;
    }
  }
  cout << mx << '\n';
  if (I == 0) cout << sx << " " << sy + 1 << '\n';
  if (I == 1) cout << sx + 1 << " " << sy << '\n';
  if (I == 2) cout << sx << " " << sy - 1 << '\n';
  if (I == 3) cout << sx - 1 << " " << sy << '\n';
  



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
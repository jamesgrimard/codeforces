// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1326/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

void solve() {
  

  long long n , k ; cin >> n >> k;
  long long a[n] , p = n - k + 1;
  long long total = 0 , cnt = 1 , mul = 1;

  for (int i=0;i<n;i++) cin >> a[i];
  
  bool f=0;

  for (int i=0;i<n;i++) {
    if (a[i] >= p) {
      f = 1;
      total += a[i];
      mul = (mul * cnt) % 998244353LL;
      cnt = 1;
    } else {
      if (!f) continue;
      cnt++;
    }
  }
  cout << total << " " << mul << '\n';



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
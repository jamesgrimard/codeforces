// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1951/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
  
using namespace std;
 
void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n , m , k; cin >> n >> m >> k;

    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];

    int days = k / m;
    if ( k % m ) days++;

    sort(a,a+n);

    int x = 0 , quantity;
    long long cost = 0;

    for (int i=0;i<days;i++) {
      if (k > 0) {
        quantity = min(m,k);
        cost +=  (long long) quantity * (long long) (a[i] + x);
        x += quantity;
        k -= quantity;
      }
    }

    cout << cost << '\n';
  
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
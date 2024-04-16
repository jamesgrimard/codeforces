// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1945/D
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n , m; cin >> n >> m;
    int a[n],b[n];
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<n;i++) cin >> b[i];

    long long minfind = a[m-1] , running_sum = 0;
    int I = m-1;
    for (int i=m-1;i>=0;i--) {
      if (i < m-1 && a[i] + running_sum < minfind) {
        minfind = a[i] + running_sum;
        I = i;
      }
      running_sum += (long long) b[i];
    }

    long long cost = a[I];
    for (int i=n-1;i>I;i--) cost += min(a[i],b[i]);
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

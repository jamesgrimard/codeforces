// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1955/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    long long n , k; cin >> n >> k;
    long long a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    long long L = k / 2LL + (k & 1LL) , R = k / 2LL;
    for (int i=0;i<n;i++) {
      if (!L) break;
      long long p = min(L,a[i]);
      a[i] -= p;
      L -= p;
    }
    for (int i=n-1;i>=0;i--) {
      if (!R) break;
      long long p = min(R,a[i]);
      a[i] -= p;
      R -= p;
    }

    int cnt = 0;
    for (int i=0;i<n;i++) if (!a[i]) cnt++;

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

// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces

// ----------------------------------------------------------------------------
// PROBLEM
// ----------------------------------------------------------------------------
/*

*/

// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
      int n; cin >> n;
      long long mx = 0;
      for (long long i=0;i<=n;i++) {
        long long sum =  (i * (i+1) * (2*i + 1))/6LL , local_mx = i * i;
        for (long long j=i+1;j<=n;j++) {
          long long k = j * (n - (j-(i+1)));
          local_mx = max(k,local_mx);
          sum += k;
        }
        mx = max(sum-local_mx, mx);
      }
      cout << mx << '\n';
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

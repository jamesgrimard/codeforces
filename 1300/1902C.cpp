// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1902/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;


long long gcd(long long a , long long b) {
  if (a % b == 0) return b;
  return gcd(b,a%b);
}


void solve() {

  int tt; cin >> tt;
  while (tt--) {

    int n; cin >> n;
    long long a[n];
    long long mn = 1e9 , mx = -1e9;
    map<long long , bool> m;
    for (int i=0;i<n;i++) {
      cin >> a[i];
      mx = max(a[i],mx);
      mn = min(a[i],mn);
      m[a[i]] = 1;
    }

    if (n == 1) {
      cout << 1 << '\n';
      continue;
    }

    long long q = 0;
    for (int i=0;i<n;i++) {
      a[i] = mx - a[i];
      if (a[i] == 0) continue;
      if (q == 0) {
        q = a[i];
        continue;
      }
      q = gcd(q,a[i]);
    }
    
    // find n+1
    long long cnt = 0;
    for (long long i=mx;i>=-1000000000LL;i-=q) {
      if (!m[i]) break;
      cnt++;
    }

    for (int i=0;i<n;i++) {
      cnt += a[i]/q;
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

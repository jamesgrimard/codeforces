// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1155/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  

long long _gcd(long long a , long long b) {
  if (a % b == 0) return b;
  return _gcd(b,a%b);
}
                          
void solve() {        
  long long n , m; cin >> n >> m;
  long long k = 0 , p, first;
  for (int i=0;i<n;i++) {
    long long x; cin >> x;
    if (i == 0) {
      p = x;
      first = x;
    } else if (i == 1) {
      k = x-p;
      p = x;
    } else {
      k = _gcd(k,x-p);
      p = x;
    }
  }

  int ans = 0;

  for (int i=0;i<m;i++) {
    long long x; cin >> x;
    if (k == x || k == 0 || k % x == 0) ans = i + 1;
  }
    
  if (!ans && k) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
    cout << first << " " << ans << '\n';
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
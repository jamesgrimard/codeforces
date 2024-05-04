// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1203/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  

long long _gcd( long long a, long long b ) {
  if (a % b == 0) return b;
  return _gcd(b,a%b);
}
    
void solve() {
  int n; cin >> n;
  long long a[n];
  for (int i=0;i<n;i++) cin >> a[i];

  long long k = a[0];
  for (int i=1;i<n;i++) k = _gcd(k,a[i]);

  int cnt = 0;
  if ((long long) sqrt(k) * (long long) sqrt(k) == k) cnt--;
  
  for (int i=1;i<=sqrt(k);i++) if (k % i == 0) cnt+=2;
             
  cout << cnt << '\n';

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
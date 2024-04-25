// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1407/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;

int _gcd(int a, int b) {
  if (a % b == 0) return b;
  return _gcd(b,a%b);
}
                                                  
void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int a[n] , mx = 0 , I = 0;

    for (int i=0;i<n;i++) {
      cin >> a[i];
      if (a[i] > mx) {
        mx = a[i];
        I = i;
      }
    }
    if (a[0] < mx) swap(a[0],a[I]);
    cout << a[0] << " ";

    int q = a[0];
    for (int i=0;i<n-1;i++) {
      int mx = _gcd(q,a[i+1]) , II= i+1;
      for (int j=i+1;j<n;j++) {
        if (_gcd(q,a[j]) > mx) {
          mx = _gcd(q,a[j]);
          II = j;
        }
      }
      swap(a[i+1],a[II]);
      q = _gcd(q,a[i+1]);
      cout << a[i+1] << " ";
    }

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
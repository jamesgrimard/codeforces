// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1967/A
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
  
using namespace std;
 
void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    long long n; cin >> n;
    long long k; cin >> k;

    long long a[n];
    for (int i=0;i<n;i++) cin >> a[i];

    sort(a,a+n);

    long long floor = a[0] , p , I = 0;
    for (int i=0;i<n-1;i++) {
      p = min((a[i+1] - a[i]) * (long long) (i + 1) , k / (long long) (i + 1) * (long long) (i + 1));
      floor += p / (long long) (i + 1);
      k -= p;
    }

    floor += k / n;
    k %= n;

    for (int i=0;i<n;i++) {
      if (a[i] > floor) {
        I = n - i;
        break;
      }
    }

    //cout << floor << " " << k << " " << I << '\n';

    cout << floor * n - (n - 1LL) + k + I << '\n';

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
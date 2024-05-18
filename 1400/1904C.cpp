// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1904/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        

  int tt; cin >> tt;
  while (tt--) {
    
    int n , k ; cin >> n >> k;
    
    long long a[n];
    for (int i=0;i<n;i++) cin >> a[i];

    long long mn;

    if (k >= 3) {
      cout << 0 << '\n';
    } else if (k == 1) {
      sort(a,a+n);
      mn = a[0];
      for (int i=1;i<n;i++) mn = min(mn,a[i]-a[i-1]);
      cout << mn << '\n';
    } else {
      sort(a,a+n);
      long long x;
      mn = a[0];
      for (int i=n-1;i>=1;i--) {
        for (int j=i-1;j>=0;j--) {
          x = a[i] - a[j]; 
          mn = min(mn,x);
          // searching for the element closest to 'x'.
          // comparing against global 'mn'.
          int L = 0 , R = n-1 , M;
          while (L <= R) {
            M = (L+R) / 2;
            if (a[M] >= x) R = M - 1;
            if (a[M] < x) L = M + 1;
          }
          if (L == 0) {
            mn = min(mn,abs(x-a[0]));
            mn = min(mn,abs(x-a[1]));
          } else if (L == n-1) {
            mn = min(mn,abs(x-a[n-1]));
            mn = min(mn,abs(x-a[n-2]));
          } else {
            mn = min(mn,abs(x-a[L]));
            mn = min(mn,abs(x-a[L+1]));
            mn = min(mn,abs(x-a[L-1]));
          }
        }
      }
      cout << mn << '\n';
    }

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
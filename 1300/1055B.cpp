// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1055/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        

  long long n , q , l; cin >> n >> q >> l;

  long long a[n];

  for (int i=0;i<n;i++) cin >> a[i];
    
  int cur = 0;

  for (int i=0;i<n;i++) {
    if (a[i] > l) {
      if (i == 0 || a[i-1] <= l) cur++;
    }  
  }

  for (int i=0;i<q;i++) {
    long long t; cin >> t;
    if (t) {
      long long I , d; cin >> I >> d;
      I--;
      bool f = 0;
      if (a[I] <= l) f = 1;
      a[I] += d;
      if (!f || a[I] <= l) continue;
      if (I == 0) {
        if (I == n-1 || (I != n-1 && a[I+1] <= l)) cur++;
      } else if (I == n-1) {
        if (I == 0 || (I != 0 && a[I-1] <= l)) cur++;
      } else {
        if (a[I-1] <= l && a[I+1] <= l) {
          cur++;
        } else if (a[I-1] > l && a[I+1] > l) {
          cur--;
        }
      }
    } else {
      cout << cur << '\n'; 
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
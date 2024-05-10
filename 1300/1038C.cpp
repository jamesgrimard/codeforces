// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1038/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;  
                          
void solve() {        
  int n; cin >> n;
  int a[n];
  int b[n];
  for (int i=0;i<n;i++) cin >> a[i];
  for (int i=0;i<n;i++) cin >> b[i];
  sort(a,a+n);
  sort(b,b+n);
  int T = n-1 , B = n-1 , m = 0;
  long long totala = 0 , totalb = 0;
  while (m < n * 2) {
    if (T == -1) {
      if (m % 2) totalb += b[B];
      B--;
    } else if (B == -1) {
      if (m % 2 == 0) totala += a[T];
      T--;
    } else {
      if (a[T] >= b[B]) {
        if (m % 2 == 0) totala += a[T];
        T--;
      } else {
        if (m % 2) totalb += b[B];
        B--;
      }
    }
    m++;
  }

  cout << totala - totalb;                  
        

                                                                                          
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
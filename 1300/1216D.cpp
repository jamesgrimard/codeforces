// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1236/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;                              

int _gcd(int a , int b) {
  if (a % b == 0) return b;
  return _gcd(b,a%b);
}

void solve() {    

  int n; cin >> n;
  int mx;
  int a[n];
  for (int i=0;i<n;i++) {
    cin >> a[i];
    if (!i) mx = a[i];
    mx = max(a[i],mx);
  }

  long long total = 0;
  int G = mx;

  for (int i=0;i<n;i++) {
    a[i] = mx - a[i];
    if (a[i] == 0) continue;
    if (total == 0) {
      G = a[i];
    } else {
      G = _gcd(G,a[i]);
    }
    total += a[i];
  }  






  if (total == 0) {
    cout << 0 << " " << 0 << '\n';
    return;
  }
  cout << total / (long long) G << " " << G << '\n';



                                           
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
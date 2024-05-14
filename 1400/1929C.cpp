// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1929/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
  
using namespace std;
 
void solve() {
  int tt; cin >> tt;
  while (tt--) {
    long long k , x , a; cin >> k >> x >> a;


    long long losses = 1 , b = 1;
    a--;
    bool ans = 1;

    for (int i=2;i<=x+1;i++) {
      b = losses / (k - 1LL) + 1LL;
      losses += b;
      if (i != x + 1) a -= b;
      if (b > a) ans = 0;
    }



    (!ans) ? cout << "NO\n" : cout << "YES\n";
    
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
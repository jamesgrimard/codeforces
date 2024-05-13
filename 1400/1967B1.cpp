// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1967/B1
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
  
using namespace std;
 
void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    long long a, b; cin >> a >> b;
    long long total = a;
    for (long long i=2;i*(i-1) <= a && i <= b;i++) {
      total += a / (i * i);
      if ((a - (a % i)) % (i * i) == i * i - i) total++;
    }

    cout << total << '\n';
  
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
// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1360/D
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
                                                                 
vector<int> primes = {2};

void _primer(int cap) {
  for (int i=3;i<=cap;i+=2) {
    bool f = 1;
    for (auto &I : primes) {
      if (i % I == 0) {
        f = 0;
        break;
      }
    }
    if (f) primes.push_back(i);
  }
}
  


void solve() {
    
  int tt; cin >> tt;
  while (tt--) {
    int n , k, mn; cin >> n >> k;

    for (int i=1;(i*i<=n&&i<=k);i++) {
      if (n % i == 0) {
        mn = n / i;
        if (n/i <= k) {
          mn = i;
          break;
        }
      }
    }
    cout << mn << '\n';

  }

}
  
int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
 
  _primer(100000);

  solve();
  
  return 0;
}
// ----------------------------------------------------------------------------
// NOTES
// ----------------------------------------------------------------------------
/*
 
*/
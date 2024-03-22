//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    long long n; cin >> n;
    long long l = 1 , r = 1e9 , m ;
    while (l <= r) {
      m = (l+r) / 2;
      if (m * m <= n) l = m + 1;
      if (m * m > n) r = m - 1;
    }
    l--;
    if (l * l == n) l--;
    cout << l << '\n';
  }
  
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


  solve();
 	
  return 0;
}


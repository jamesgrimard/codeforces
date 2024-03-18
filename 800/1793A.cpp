//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;



void solve() {
  int tt; cin >> tt;
  while (tt--) {
    long long a,b,n,m; cin >> a >> b >> n >> m;
    long long q = n / (m + 1) , p = n / (m + 1);
    if (n % (m + 1) != 0) q++;
    cout << min(min(q * m * a, n*a) , min(n * b , (p * m * a) + (n - (p * m + p)) * min(a,b))) << '\n';
  }
}




int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
    
  return 0;
}


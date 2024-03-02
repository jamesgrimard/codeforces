//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >>tt;
  while (tt--) {
    int n , k; cin >> n >> k;
    int a[n+2] = {};
    for (int i=1;i<=n;i++) cin >> a[i];
    a[n+1] = k;
    int _max = 0;
    for (int i=1;i<=n+1;i++) {
      _max = max(a[i]-a[i-1],_max);
      if (i == n+1) _max = max((a[i]-a[i-1]) * 2,_max);
    }
    cout << _max << '\n';
  }

  return 0;
}


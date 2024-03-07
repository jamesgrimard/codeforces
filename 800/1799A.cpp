//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--) {
    int n , m; cin >> n >> m;
    int a[100001] = {} , cnt = 0 , r[n+1] = {};
    for (int i=1;i<=m;i++) {
      int x; cin >> x;
      if (a[x] == 0) {
        a[x]++;
        r[n-cnt] = i;
        cnt++;
      }
    }
    for (int i=1;i<=n;i++) {
      (r[i] == 0) ? cout << -1 << " " : cout << r[i] << " ";
    }
    cout << '\n';
  }

  return 0;
}


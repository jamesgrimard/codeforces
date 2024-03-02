//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt;cin >> tt;
  while (tt--) {
    int n , m ; cin >> n >> m;
    string a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    string r = "vika";
    int cnt = 0;
    for (int j=0;j<m;j++) {
      for (int i=0;i<n;i++) {
        if (a[i][j] == r[cnt]) {
          cnt++;
          break;
        }
      }
      if (cnt == 4) break;
    }
    (cnt == 4) ? cout << "YES\n" : cout << "NO\n";
  }


  return 0;
}


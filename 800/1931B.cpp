//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int a[n] , sum = 0 , extra = 0;
    for (int i=0;i<n;i++) {
      cin >> a[i];
      sum += a[i];
    }
    bool ans = 1;
    for (int i=0;i<n;i++) {
      extra -= (sum/n - a[i]);
      if (extra < 0) ans = 0;
    }
    ans ? cout << "YES\n" : cout << "NO\n";
  }


  return 0;
}


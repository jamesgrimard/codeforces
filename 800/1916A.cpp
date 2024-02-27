//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--) {
    int n,k; cin >> n >> k;
    int product = 1;
    for (int i=0;i<n;i++) {
      int tmp; cin >> tmp;
      if (product <= 2023) product *= tmp;
    }
    if (2023 % product == 0) {
      cout << "YES\n" << 2023 / product << " ";
      for (int i=0;i<k-1;i++) {
        cout << 1 << " ";
      }
    } else {
      cout << "NO";
    }
    cout << '\n';
  }

  return 0;
}


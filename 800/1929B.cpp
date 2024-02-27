//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--) {
    int n , k; cin >> n >> k;
    int max_doubles = 2 * n - 2;
    if (k / 2 + (k % 2) <= max_doubles) {
      cout << (k / 2 + (k % 2)) << '\n';
    } else {
      cout << k - max_doubles * 2 + max_doubles<< '\n';
    }
  }


  return 0;
}


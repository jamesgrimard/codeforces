//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; std::cin >> tt;

  while (tt--) {
    int n; std::cin >> n;
    int a[n] = {}, b[n] = {};
    for (int i=0;i<n;i++) {
      int tmp; std::cin >> tmp;
      tmp % 2 ? b[i] = tmp : a[i] = tmp;
    }
    std::sort(a, a + n, std::greater<int>());
    std::sort(b, b + n);
    int sum_a = 0 , sum_b = 0;
    bool ans = 1;
    for (int i=0;i<n;i++) {
      sum_a += a[i] , sum_b += b[i];
      if (sum_a <= sum_b) ans = 0;
    }
    ans ? std::cout << "YES\n" : std::cout << "NO\n";
  }

  return 0;
}


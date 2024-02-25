#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; std::cin >> tt;

  while (tt--) {
    int a[3];
    int min = 9;
    int sum = 0;
    for (int i=0;i<3;i++) {
      int tmp; std::cin >> tmp;
      a[i] = tmp;
      if (tmp <= min) min = tmp;
      sum += tmp;
    }
    ((sum - min) >= 10) ? std::cout << "YES\n" : std::cout << "NO\n";
  }  

  return 0;
}

#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; std::cin >> tt;

  while (tt--) {
    int n; std::cin >> n;
    std::vector<int> a(n);
    for (int i=0;i<n;i++) std::cin >> a[i];
    std::sort(a.begin(),a.end());
    a[0]++;
    long long product = 1;
    for (int i=0;i<n;i++) product *= a[i];
    std::cout << product << '\n';
  }

  return 0;
}

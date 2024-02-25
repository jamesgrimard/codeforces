#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; std::cin >> tt;

  while (tt--) {
    int a[3];
    for (int i=0;i<3;i++) std::cin>>a[i];
    if (a[1] == a[0]) {
      std::cout<<a[2];
    } else if (a[1] == a[2]) {
      std::cout<<a[0];
    } else {
      std::cout<<a[1];
    }
    std::cout<<'\n';
  }

  return 0;
}

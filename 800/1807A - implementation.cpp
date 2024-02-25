#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; std::cin >> tt;

  while (tt>0) {
  	int a,b,c; std::cin >> a >> b >> c;
  	if (a+b==c) {
  		std::cout << '+';
  	} else {
  		std::cout << '-';
  	}
  	std::cout << '\n';
  	tt--;
  }

  return 0;
}

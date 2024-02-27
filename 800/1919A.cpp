//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--) {
    int a,b; cin >> a >> b;
    ((a%10 + b%10) % 2) ? cout << "Alice\n" : cout << "Bob\n";
  }

  return 0;
}


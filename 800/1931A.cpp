//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    string s = "";
    for (int i=2;i>=0;i--){ 
      if (n - i >= 26) {
        s = char(96 + 26) + s;
        n -= 26;
      } else {
        s = char(96 + (n-i)) + s;
        n -= (n-i);
      }
    }
    cout << s << '\n';
  }

  return 0;
}


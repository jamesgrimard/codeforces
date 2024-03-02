//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--) {
    string s; cin >> s;
    for (int i=0;i<10;i++) {
      if (s[i] == '1') {
        cout << "13\n"; break;
      } else if (s[i] == '3') {
        cout << "31\n"; break;
      }
    }
  }


  return 0;
}


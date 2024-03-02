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
    for (int i=1;i<=8;i++) if (i != s[1]-'0') cout << s[0] << i << '\n';
    for (int i=0;i<8;i++) if (char(97+i) != s[0]) cout << char(97+i) << s[1] << '\n';
  }

  return 0;
}


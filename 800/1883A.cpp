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
    int cost = 0;
    char current = '1';
    for (int i=0;i<4;i++) {
      if (current == '0') {
        if (s[i] != '0') {
          cost += (10 - (s[i]-'0'));
        }        
      } else {
        if (s[i] == '0') {
          cost += ('9'-current + 1);
        } else {
          cost += abs(s[i] - current);
        }
      }
      current = s[i];
      cost++;
    }
    cout << cost << '\n';
  }

  return 0;
}


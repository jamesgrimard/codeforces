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
    string a = s.substr(0,1), b = "0";
    for (int i=1;i<s.size();i++) {
      if (s[i] != '0') {
        b = s.substr(i,s.size());
        a = s.substr(0,i);
        break;
      }
    }
    if (a == b || b == "0" || a.size() > b.size()) {
      cout << "-1\n";
    } else if (a.size()==b.size()) {
      for (int i=0;i<a.size();i++) {
        if (b[i] > a[i]) {
          cout << a << " " << b << '\n';
          break;
        } else if (b[i] < a[i]) {
            cout << "-1\n";
            break;
        }
      }
    } else {
      cout << a << " " << b << '\n';
    }

  }

  return 0;
}


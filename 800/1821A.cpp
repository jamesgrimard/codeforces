//github.com/jamesgrimard

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  int tt; cin >> tt;
  while (tt--) {
    string s; cin >> s;
    int sum = 1;
    for (int i=s.size()-1;i>0;i--) if (s[i] == '?') sum *= 10;
    if (s[0] == '0') {
      cout << "0\n";
    } else if (s[0] == '?') {
      cout << sum * 9 << '\n';
    } else {
      cout << sum << '\n';
    }
  }

  return 0;
}

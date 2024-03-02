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
    int n; cin >> n;
    string s; cin >> s;
    bool flag = 0;
    int cnt = 0;
    for (int i=0;i<n;i++) {
      if (i < n-2 && s.substr(i,3) == "...") flag = 1;
      if (s[i] == '.') cnt++;
    }
    (flag) ? cout << 2 << "\n" : cout << cnt << "\n";
  }

  return 0;
}


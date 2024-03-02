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
    int n , a, q; cin >> n >> a >> q;
    string s; cin >> s;
    int sum = 0 , ans = -2 , cnt = 0;
    for (int i=0;i<q;i++) {
      (s[i] == '+') ? sum++ : sum--;
      if (s[i] == '+') cnt++;
      if (a + sum >= n) ans = 1;
      if (ans != 1 && a + cnt == n) ans = 0;
    }
    if (ans == 1 || n - a == 0) {
      cout << "YES\n";
    } else if (ans == 0) {
      cout << "MAYBE\n";
    } else {
      cout << "NO\n";
    }
  }


  return 0;
}


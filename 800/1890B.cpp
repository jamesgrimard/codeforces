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
    int a,b; cin >> a >> b;
    string x , y; cin >> x >> y;
    bool flag = 1 , ans = 1;
    for (int i=0;i<b-1;i++) if (y[i] == y[i+1]) flag = 0;
    for (int i=0;i<a-1;i++) {
      if (x[i] == x[i+1]) {
        if (flag) {
          if (x[i] == y[0] || x[i+1] == y[b-1]) ans = 0;
        } else {
          ans = 0;
        }
      }
    }
    ans ? cout << "YES\n" : cout << "NO\n";
  }

  return 0;
}


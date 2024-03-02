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
    int n,m; cin >> n >> m;
    string a,b; cin >> a >> b;
    for (int k=0;k<=5;k++) {
      bool F = 0;
      for (int i=0;i<=(int) a.size() - (int) b.size();i++) {
        bool flag = 1;
        for (int j=0;j<b.size();j++) {
          if (b[j] != a[i+j]) flag = 0;
        }
        if (flag) F = 1;
      }
      if (F) {cout << k << '\n'; break;}
      if (k == 5) cout << -1 << '\n';
      a += a;
    }
  }

  return 0;
}


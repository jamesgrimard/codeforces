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
    string a[11];
    for (int i=1;i<=10;i++) {
      string tmp; cin >> tmp;
      tmp = "." + tmp;
      a[i] = tmp;
    }
    int sum = 0;
    for (int i=1;i<=10;i++) {
      for (int j=1;j<=10;j++) {
        if (a[i][j] == '.') continue;
        if (i <= 5 && j <= 5) sum += min(i,j);
        if (i <= 5 && j > 5) sum += min(i,5-(j%6));
        if (i > 5 && j <= 5) sum += min(j,5-(i%6));
        if (i > 5 && j > 5) sum += min(5-(i%6),5-(j%6));
      }
    }
    cout << sum << '\n';
  }

  return 0;
}


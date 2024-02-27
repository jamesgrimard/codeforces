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
    vector<string> a(3);
    for (int i=0;i<3;i++) cin >> a[i];
    char l, r;
    for (int i=0;i<3;i++) {
      for (int j=0;j<3;j++) {
        if (a[i][j] == '?') l = a[i][mod((j - 1),3)] , r = a[i][(j + 1) % 3];
      }
    }
    char t[] = {'A','B','C'};
    for (int i=0;i<3;i++) {
      if (t[i] != l && t[i] != r) cout << t[i] << '\n';
    }
  }

  return 0;
}


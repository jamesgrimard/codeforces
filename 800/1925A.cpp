//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--){ 
    int n,k; cin >> n >> k;
    string s = "";
    for (int i=0;i<n;i++) {
      for (int j=0;j<k;j++) {
        s += char(97 + j);
      }
    }
    cout << s << '\n';
  }

  return 0;
}


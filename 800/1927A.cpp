//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--) {
    int n , start = 0 , end = 0; cin >> n;
    string s; cin >> s;
    for (int i=0;i<n;i++) {
      if (s[i] == 'B') {
        start = i + 1; 
        break;
      }
    }
    for (int i=n-1;i>=0;i--) {
      if (s[i] == 'B') {
        end = i + 1;
        break;
      }
    }

    (start == 0 && end == 0) ? cout << 0 << '\n' : cout << end - start + 1 << '\n';
  }
 


  return 0;
}


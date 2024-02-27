//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int current = 0 , _max = 0;
    for (int i=0;i<n;i++) {
      int tmp; cin >> tmp;
      if (tmp) {
        if (current > _max) _max = current;
        current = 0;
      } else {
        current++;
      }
    }
    cout << max(current,_max) << '\n';
  }




  return 0;
}


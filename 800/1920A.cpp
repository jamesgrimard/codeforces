//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int _min = 1000000000, _max = 0;
    vector<int> a;
    for (int i=0;i<n;i++) {
      int x,y; cin >> x >> y;
      if (x == 1) {
        _max = max(y,_max);
      } else if (x == 2) {
        _min = min(y,_min);
      } else {
        a.push_back(y);
      }
    }
    int cnt = _min - _max + 1;
    for (int i=0;i<a.size();i++) {
      if (a[i] <= _min && a[i] >= _max) cnt--;
    }
    cout << max(0,cnt) << '\n';
  }

  return 0;
}


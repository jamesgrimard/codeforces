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
    int a[n]; for (int i=0;i<n;i++) cin >> a[i];
    int _max = 0;
    bool flag = 0;
    for (int i=1;i<n;i++) {
      if (a[i] < a[i-1]) {
        _max = max(a[i-1],_max);
      }
    }
    cout << _max << '\n';
  }


  return 0;
}


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
    int cnt = 1;
    for (int i=0;i<n;i++) {
      if (a[i] == cnt) cnt++;
      if (i < n-1) cnt++;
    }
    cout << cnt << '\n';
  }

  return 0;
}


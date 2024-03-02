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
    int a[n*2];
    for (int i=0;i<2*n;i++) cin >> a[i];
    sort(a,a+(2*n));
    int cnt = 0;
    for (int i=1;i<n;i++) {
      cnt += (a[i] - a[i-1]);
    }
    for (int i=n+1;i<n*2;i++) {
      cnt += (a[i] - a[i-1]);
    }
    cout << cnt << "\n";
    for (int i=0;i<n;i++) cout << a[i] << " " << a[i+n] << "\n";
  }

  return 0;
}


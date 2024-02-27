//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();


  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    long long sum = 0;
    for (int i=1;i<n;i++) sum += (a[i] - a[i-1]);
    cout << sum << '\n';
  }


  return 0;
}


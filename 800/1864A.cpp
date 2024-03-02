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
    int x,y,n; cin >> x >> y >> n;
    int a[n] , cnt = 1;
    a[0] = x , a[n-1] = y;
    for (int i=n-2;i>=1;i--) {
      a[i] = a[i+1] - cnt;
      cnt++;
    }
    if (a[1] - a[0] < cnt) {
      cout << "-1\n";
    } else {
      for (auto x : a) cout << x << " ";
      cout << '\n';
    }
  }


  return 0;
}


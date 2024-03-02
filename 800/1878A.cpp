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
    int n,k; cin >> n >> k;
    bool flag = 0;
    for (int i=0;i<n;i++) {
      int tmp; cin >> tmp;
      if (tmp == k) flag = 1;
    }
    (flag) ? cout << "YES\n" : cout << "NO\n";
  }

  return 0;
}


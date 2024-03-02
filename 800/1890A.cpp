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
    unordered_map<int,int> m;
    for (int i=0;i<n;i++) {
      int tmp; cin >> tmp;
      m[tmp]++;
    }
    if (m.size() <= 2) {
      bool ans = 1;
      int cnt = 0 , prev;
      for (auto [k,v] : m) {
        cnt++;
        if (cnt == 2 && abs(v-prev) > 1) ans = 0;
        prev = v;
      } 
      ans ? cout << "YES\n" : cout << "NO\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}


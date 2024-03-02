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
    string s; cin >> s;
    int a[27] = {};
    for (int i=0;i<n;i++) a[s[i]-'A'+1]++;
    int cnt = 0;
    for (int i=1;i<=26;i++) {
      if (a[i] >= i) cnt++;
    }
    cout << cnt << "\n";
  }

  return 0;
}


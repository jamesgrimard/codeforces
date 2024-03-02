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
    string s; cin >> s;
    int cnt = 0;
    for (int i=n-1;i>=0;i--) {
      if (s[i] == 'B') {
        cnt++;
        i -= (k - 1);
      }
    }
    cout << cnt << '\n';
  }

  return 0;
}


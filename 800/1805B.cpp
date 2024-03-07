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
    char c = s[0];
    int x = 0;
    for (int i=1;i<n;i++) if (s[i] <= c) {c = s[i] , x = i;}
    cout << c;
    for (int i=0;i<n;i++) {
      if (i == x) continue;
      cout << s[i];
    }
    cout << '\n';
  }


  return 0;
}


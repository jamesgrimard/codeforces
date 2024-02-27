//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--){ 
    int n; cin >> n;
    string s; cin >> s;
    int plus = 0 , minus = 0;
    for (int i=0;i<n;i++) (s[i] == '+') ? plus++ : minus++;
    cout << abs(minus - plus) << '\n';
  }

  return 0;
}


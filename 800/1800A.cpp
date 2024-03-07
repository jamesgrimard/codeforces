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
    string ans = "";
    ans.push_back(tolower(s[0]));
    for (int i=1;i<n;i++) {
      if (tolower(s[i]) != tolower(s[i-1])) ans.push_back(tolower(s[i]));
    }
    ("meow" == ans) ? cout << "YES\n" : cout << "NO\n";
  }

  return 0;
}


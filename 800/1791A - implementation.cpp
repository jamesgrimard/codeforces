#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  std::string s = "codeforces";
  bool a[26] = {}; // initialize array with all 0's
  for (int i=0;i<s.size();i++) a[s[i]-97] = 1; // map the string to the array

  int tt; std::cin>>tt;
  while (tt--) {
    char c; std::cin>>c;
    (a[c-97] == 1) ? std::cout<<"YES" : std::cout<<"NO";
    std::cout<<'\n';
  }

  return 0;
}

//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int n; cin >> n;
  string s; cin >> s;

  int L = 0 , O = 0;

  for (int i=0;i<n;i++) (s[i] == 'L') ? L++ : O++;

  int my_L = 0 , my_O = 0;

  bool ans = 0;
  int ans_int;

  for (int i=0;i<n-1;i++) {
    (s[i] == 'L') ? my_L++ : my_O++;
    if (my_L * 2 != L && my_O * 2 != O) {
      ans = 1 , ans_int = i + 1;
      break;
    }
  }
  (ans) ? cout << ans_int << '\n' : cout << "-1\n";

  return 0;
}


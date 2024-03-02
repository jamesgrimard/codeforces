//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int n; cin >> n;
  int _min = 0;
  for (int i=0;i<n;i++) {
    int tmp; cin >> tmp;
    if (i == 0 || _min >= abs(tmp)) _min = abs(tmp);
  }
  cout << _min << '\n';


  return 0;
}


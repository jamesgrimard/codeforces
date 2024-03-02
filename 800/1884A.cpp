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
    int sum = 0, N = n;
    while (n) {
      sum += (n % 10);
      n/=10;
    }
    
    while (sum % k != 0) {
      N++;
      n = N;
      sum = 0;
      while (n) {
        sum += (n % 10);
        n/=10;
      }
    }
    cout << N << '\n';
  }

  return 0;
}


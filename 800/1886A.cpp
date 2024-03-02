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
    int a[3] = {1,2,n-3};
    if (n % 3 == 0) {a[0] = 1, a[1] = 4, a[2] = n-5;}
    (a[2] <= a[1]) ? cout << "NO\n" : cout << "YES\n" << a[0] << " " << a[1] << " " << a[2] << "\n";
    
    
    
    
  }

  return 0;
}


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
    int a[n], r[n] = {};
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=1;i<=n;i*=2) r[i-1] = 1; 
    bool ans = 1;
    for (int i=0;i<n-1;i++) {
      if (r[i] == 0 && a[i] > a[i+1]) ans = 0;
    }   
    ans ? cout << "YES\n" : cout << "NO\n";
    
  }

  return 0;
}


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
    int a[n]; for (int i=0;i<n;i++) cin >> a[i];
    vector<int> b;
    for (int i=n-1;i>=0;i--) {
      b.push_back(a[i]);
      if (i > 0 && a[i] < a[i-1]) b.push_back(a[i]);
    }
    cout << b.size() << '\n';
    for (int i=b.size()-1;i>=0;i--) cout << b[i] << " ";
    cout << '\n';
  }


  return 0;
}


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
    int n , k; cin >> n >> k;
    int a[n];
    for (int i=k;i>=0;i--) a[i] = n - (k - i);
    for (int i=n-1;i>k;i--) a[i] = n - i;
    for (int var : a) cout << var << " ";
    cout << '\n';
  }

  return 0;
}


//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

long long hcf(long long a , long long b) {
  if (a % b == 0) return b;
  return hcf(b, a % b);
}

void solve() {
  
  long long tt; cin >> tt;
  while (tt--) {
    long long a , b; cin >> a >> b;
    if (a % 2 == 0 || b % 2 == 0) {
      cout << b * 2 << '\n';
    } else {
      if (a == 1) {
        cout << b * b << '\n';
      } else {
        long long ans = a;
        for (int i=3;i*i<=b;i+=2) {
          if (a % i == 0 || b % i == 0) {
            ans = i;
            break;
          }
        }
        cout << ans * b << '\n';
      }
    }
  }
	
}


int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
	
  return 0;
}

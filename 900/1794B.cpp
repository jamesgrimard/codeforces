// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

const char pi[] = "3141592653589793238462643383279";

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

void solve() {

  int tt; cin >> tt;
  while (tt--) {
      int n; cin >> n;
      int a[n]; for (int i=0;i<n;i++) cin >> a[i];
      for (int i=0;i<n;i++) {
        if (a[i] == 1) a[i]++;
        if (i > 0 && a[i]%a[i-1] == 0) a[i]++;
      }
      for (auto x:a) cout << x << " ";
      cout << '\n';
  }



}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

  solve();
  
  return 0;
}
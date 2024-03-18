// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

const char pi[] = "3141592653589793238462643383279";

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

void solve() {

  int tt; cin >> tt;
  while (tt--){ 
    int n; cin >> n;
    if (n == 3) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
      if (n&1) {
        for (int i=0;i<n/2;i++) cout << n/2-1 << " " << n/2*-1 << " ";
        cout << n/2-1;
      } else {
        for (int i=0;i<n/2;i++) {
          cout << -1 << " " << 1 << " ";
        }
      }
      
      cout << '\n';
    }
  }
  



}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

  solve();
  
  return 0;
}
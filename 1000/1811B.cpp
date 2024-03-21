// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

const char pi[] = "3141592653589793238462643383279";

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

const long long MOD = 1e9 + 7;


void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n , r1 , r2 , c1 , c2; cin >> n >> r1 >> c1 >> r2 >> c2;
    int mn1 = min(min(r1,n-r1+1),min(c1,n-c1+1));
    int mn2 = min(min(r2,n-r2+1),min(c2,n-c2+1));
    cout << abs(mn2-mn1) << '\n';
  }


  
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

  solve();
  
  return 0;
}
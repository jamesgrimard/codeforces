// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

const char pi[] = "3141592653589793238462643383279";

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

const long long C = 1e9 + 7;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    long long n ; cin >> n;
    long long p = 0 , q = 1;
    long long a[n+1] = {1}; for (int i=1;i<=n;i++) {
      a[i] = a[i-1] * i % C;
    }
    a[0] = 0;

    cout << n * (n - 1) % C * a[n] % C<< '\n';
  }
  



}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

  solve();
  
  return 0;
}
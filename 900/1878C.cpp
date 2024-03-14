// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

const char pi[] = "3141592653589793238462643383279";

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

  int tt; cin >> tt;
  while (tt--) {
  	long long n , k , x; cin >> n >> k >> x;
  	(k * (n-k+1 + n) / 2LL < x || (k*k+k)/2LL > x) ? cout << "NO\n" : cout << "YES\n";
  }
                
  return 0;
}
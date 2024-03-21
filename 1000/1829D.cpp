// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

const char pi[] = "3141592653589793238462643383279";

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

const long long MOD = 1e9 + 7;

void _find(int k, int n, bool* ans) {
  if (k == n) *ans = 1;
  if (n % 3 == 0) {
    _find(k,n/3,ans);
    _find(k,n/3*2,ans);
  }
}



void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n , k; cin >> n >> k;
    bool ans = 0;
    _find(k,n,&ans);
    (ans) ? cout << "YES\n" : cout << "NO\n";
  }


  
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

  solve();
  
  return 0;
}
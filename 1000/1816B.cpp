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
    int n; cin >> n;
    int cntu = 2 , cntl = 1;
    cout << 2 * n << " ";
    for (int i=0;i<n/2-1;i++) cout << cntu + 2*i << " " << 2 * n - 2 - 2*i << " ";
    cout << n << '\n';
    for (int i=0;i<n/2-1;i++) cout << cntl + 2*i << " " << 2 * n - 3 - 2*i << " ";
    cout << n-1 << " " << 2 * n -1 << '\n';    
  }


  
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

  solve();
  
  return 0;
}
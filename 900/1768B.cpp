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
    int n,k; cin >> n >> k;
    int p = 1 , cnt = 0;
    for (int i=0;i<n;i++) {
        int x; cin >> x;
        if (x == p) {
            p++;
        } else {
            cnt++;
        }    
    }
    cout << ceil(cnt/(float) k) << '\n';
  }
  



}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

  solve();
  
  return 0;
}
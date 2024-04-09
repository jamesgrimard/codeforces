//github.com/jamesgrimard/codeforces
  
#include <bits/stdc++.h>
       
using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

const int MOD = 1e9 + 7;

void solve() {
  
  int tt; cin >> tt;
  while (tt--) {
    long long n , m , k; cin >> n >> m >> k;
    
    if (k == 1) {
      cout << 1 << '\n';
    } else if (k == 2) {
      cout << m / n + min(m,(n - 1)) << '\n';
    } else if (k == 3) {
      cout << max(0LL,m - (m / n + min(m,(n - 1)))) << '\n';
    } else {
      cout << 0 << '\n';
    }
    
  }


     
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

                                                             
 

//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

int e = 1e9;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--) {
  	long long n , k; cin >> n >> k;
  	if (n % 2LL == 0) {
  		cout << "YES\n";
  	} else if (n % 2LL != k % 2LL) {
  		cout << "NO\n";
  	} else {
  		cout << "YES\n";
  	}
  }
	


  return 0;
}


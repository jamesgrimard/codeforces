//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--) {
  	int n , k , x; cin >> n >> k >> x;           
  	// only need numbers 1,2,3
  	if (x != 1) {
	  	cout << "YES\n";
	  	cout << n << '\n';
	  	for (int i=1;i<=n;i++) cout << 1 << " ";
	  	cout << '\n';
		} else {
			if (k == 1 || (k == 2 && (n % 2 == 1))) {
				cout << "NO\n";
			} else {
				cout << "YES\n";
				if (n % 2 == 1) {cout << (n-3) / 2 + 1 << '\n'; for (int i=3;i<=n;i+=2) {(i == 3) ? cout << "3 " : cout << "2 ";}}
				if (n % 2 == 0) {cout << n / 2<< '\n'; for (int i=2;i<=n;i+=2) cout << "2 ";}
				cout << '\n';
			}
		}
 	}

  return 0;
}


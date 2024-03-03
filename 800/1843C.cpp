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
		long long n, sum = 0; cin >> n;
		while (n > 0) {
			sum += n;
			n /= 2;
		}
		cout << sum << '\n';
	}


  return 0;
}


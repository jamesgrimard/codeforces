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
		long long a ,b ; cin >> a >> b;
		cout << 2 << '\n';
		if (a >= b) {
			cout << max(a-1,(a+1)%e) << " " << 1 << '\n' << a << " " << b << '\n';
		} else {
			cout << 1 << " " << max(b-1,(b+1)%e) << '\n' << a << " " << b << '\n';			
		}
	}

  return 0;
}


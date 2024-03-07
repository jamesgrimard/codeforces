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
		bool flag = 0;
		int n; cin >> n;
		for (int i=1;i<=n;i++) {
			int x; cin >> x;
			if (x <= i) {
				flag = 1;
			}
		}
		(flag) ? cout << "YES\n" : cout << "NO\n";
	}

  return 0;
}


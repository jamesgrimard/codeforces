//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();
	
	// student happy if i != a[i];
	// get a list of all unhappy students (i==a[i])
	// ceil(number of unhappy students / 2)

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int cnt = 0;
		int a[n]; for (int i=0;i<n;i++) {
			cin >> a[i];
			if (a[i] == i + 1) cnt++;
		}	
		cout << cnt / 2 + cnt % 2 << '\n';
	}

  return 0;
}


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
		int n; cin >> n;
		int a[n], p[n]; for (int i=0;i<n;i++) {
			cin >> a[i];
			p[i] = a[i] % 2;
		}
		sort(a,a+n);
		bool ans = 1;
		for (int i=0;i<n;i++) if (a[i] % 2 != p[i]) ans = 0;
		ans ? cout << "YES\n" : cout << "NO\n";
	}



  return 0;
}


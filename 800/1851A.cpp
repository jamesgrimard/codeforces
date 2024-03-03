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
		int n,m,k,H; cin >> n >> m >> k >> H;
		int a[n]; for (int i=0;i<n;i++) {
			cin >> a[i];
			a[i] = abs(a[i]-H);
		}
		int cnt = 0;
		for (int i=0;i<n;i++) {
			if (a[i] % k == 0 && a[i] > 0 && a[i] / k + 1 <= m) cnt++;
		}
		cout << cnt << '\n';
	}		

  return 0;
}


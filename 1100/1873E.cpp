//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

void solve() {

	int tt; cin >> tt;
	while (tt--) {
		long long n , x; cin >> n >> x;
		long long a[n]; for (int i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		long long h = a[0];
		for (int i=1;i<n;i++) {
			if (a[i] != a[i-1]) {
				long long need = (a[i] - a[i-1]) * i;
				long long volume = min(x / i * i, need);
				x -= volume;
				h += volume / i;
			}
		}
		cout << h + x / n << '\n';
	}

				                        
}


int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();

  return 0;
}

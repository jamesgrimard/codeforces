//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

void solve() {

	int tt; cin >> tt;
	while (tt--) {
		long long n , c; 
		
		cin >> n >> c;

		long long a[n];
		for (long long i=0;i<n;i++) cin >> a[i];
		
		long long l = 1 , r = 1e9 , m;

		while (l <= r) {
			m = (l + r) / 2LL;
			long long sum = 0;
			for (long long i=0;i<n;i++) {
				sum += (a[i] + 2LL * m) * (a[i] + 2LL * m);
				if (sum > c) break;
			}
			if (sum >= c) r = m - 1;
			if (sum < c) l = m + 1;
		}

		cout << l << '\n';
	}



	
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}

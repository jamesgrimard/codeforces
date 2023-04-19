// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n;  cin >> n;
		vector<long long> a(n+1);
		for (long long i=1;i<=n;i++) cin >> a[i];
		
		long long cnt = 0;
		for (long long i=1;i<=n;i++) {
			long long k = (2LL * i + 1LL) % a[i];
			if (k != 0) k = (a[i] - k);
			for (long long j=i+1+k;j<=n;j+=a[i]) { 
				if (a[i] * a[j] == i+j) cnt++;
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}
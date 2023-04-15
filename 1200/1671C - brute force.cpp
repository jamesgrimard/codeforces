// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n , k; cin >> n >> k;
		vector<long long> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		sort(begin(a),end(a));
		for (int i=1;i<n;i++) a[i] += a[i-1];
		long long sum = 0;
		for (int i=0;i<n;i++) {
			if (a[i] > k) break;
			sum += ((k-a[i])/(i+1) + 1);
		}
		
		cout << sum << '\n';
	}

	return 0;
}
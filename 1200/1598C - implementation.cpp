// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		double n; cin >> n;
		vector<double> a(n);
		map<double,double> m;
		double sum = 0;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			sum += a[i];
		}
		sum /= n;
		for (int i=0;i<n;i++) m[a[i]-sum]++;

		double cnt = 0;

		for (auto [k,v] : m) {
			if (k > 0) break;
			if (k == 0 && v > 0) {
				double K = (v-1.0);
				cnt += (K*K+K)/2.0;
			} else {
				cnt += v * m[k*-1.0];				
			}
			//cout << k << " " << v << '\n';
		}



		cout << setprecision(18) << cnt << '\n';
	}

	return 0;
}
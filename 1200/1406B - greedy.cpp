// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<long long> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		sort(rbegin(a),rend(a), [](auto a, auto b){
			return abs(a) < abs(b);
		});
		long long sum = 1 , sum2 = 0 , sum3 = 1 , lastn = 1 , lastp = -1;
		for (int i=0;i<5;i++) {
			sum *= a[i];
			if (a[i] < 0) lastn = a[i];
			if (a[i] > 0) lastp = a[i];
			if (i == 4 && sum < 0) {
				sum2 = sum;
				if (lastp != -1) { // find another neg
					for (int j=i+1;j<n;j++) {
						if (a[j] <= 0) {
							sum /= lastp;
							sum *= a[j];
							break;
						}
					}
				}
				// remove neg
				for (int j=i+1;j<n;j++) {
					if (a[j] >= 0) {
						sum2 /= lastn;
						sum2 *= a[j];
						break;
					}
				}
			}
		}
		for (int i=n-1;i>=n-5;i--) sum3 *= a[i];
		cout << max(max(sum,sum2),sum3) << '\n';
	}
 
	return 0;
}
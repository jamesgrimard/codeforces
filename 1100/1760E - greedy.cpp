// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		int f0 = -1 , l1 = -1;
		long long sum0 = 0 , sum1 = 0 , sum2 = 0 , o = 0 , o1 = 0 , o2 = 0;
		
		vector<int> a(n);

		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (a[i] == 0 && f0 == -1) f0 = i;
			if (a[i] == 1 && i > l1) l1 = i;
			if (a[i] == 1) o++;
			if (a[i] == 0) sum0 += o;
		}

		vector<int> b(begin(a),end(a));

		(f0 != -1) ? a[f0] = 1 : a[n-1] = 0;
		(l1 != -1) ? b[l1] = 0 : b[0] = 1;

		for (int i=0;i<n;i++) {
			if (a[i] == 1) o1++;
			if (a[i] == 0) sum1 += o1;
		}
		for (int i=0;i<n;i++) {
			if (b[i] == 1) o2++;
			if (b[i] == 0) sum2 += o2;
		}
		cout << max(max(sum0,sum1),sum2) << '\n';
		//cout << f0 << " " << l1 << '\n';
		//cout << sum0 << " " << sum1 << " " << sum2 << '\n';
	}

	return 0;
}


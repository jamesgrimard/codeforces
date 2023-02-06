// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		sort(begin(a),end(a));
		int count = 1;
		for (int i=n-2;i>=0;i--) {
			if (a[i] != a[i+1] && a[i] < i+1 && a[i+1] > i+1) {
				count++;
			}
		}
		if (a[0] != 0) count++;
		cout << count << '\n';
	}

	return 0;
}


// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n,k;cin >> n >> k;
		vector<int> a(k);
		for (int i=0;i<k;i++) cin >> a[i];
		sort(begin(a),end(a));
		int sum = 0 , count = 0;
		for (int i=k-1;i>=0;i--) {
			if (n - a[i] + sum < n) {
				count++;
				sum += (n - a[i]);
			} else {break;}
		}
		cout << count << '\n';
	}

	return 0;
}

// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		vector<int> a_sorted(begin(a),end(a));
		sort(begin(a),end(a));
		vector<bool> ref(n);
		for (int i=k;i<n;i++) {
			ref[i] = 1;
			ref[i-k] = 1; 
		}
		bool ans = 1;
		for (int i=0;i<n;i++) {
			if (ref[i] == 0 && a_sorted[i] != a[i]) ans = 0;
		}
		ans == 1 ? cout << "YES\n" : cout <<  "NO\n";
	}

	return 0;
}
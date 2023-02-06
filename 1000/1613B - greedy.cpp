// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		map<int,bool> m;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			m[a[i]] = 1;
		}
		sort(begin(a),end(a));
		int count = 0;
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				if (a[i] != a[j] && m[a[j]%a[i]] == 0) {
					cout << a[j] << " " << a[i] << '\n';
					count++;
				}
				if (count == n/2) goto out;
			}
		}
		out: continue;
	}


	return 0;
}

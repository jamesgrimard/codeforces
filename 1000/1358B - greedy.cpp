// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ;cin >>n ;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		sort(begin(a),end(a));
		int k = 1;
		for (int i=n-1;i>=0;i--) {
			if (i+2 > a[i]) {
				k = i + 2; break;
			}
		}
		cout << k << '\n';
	}



	return 0;
}

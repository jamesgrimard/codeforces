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
		int o = 0 , z = 0;
		for (int i=0;i<n;i++) {
			(a[i] == 1) ? o++ : z++;
		}
		if (z >= o) {
			cout << n - o << '\n';
			for (int i=0;i<n;i++) {
				if (a[i] == 0) cout << 0 << " ";
			}
		} else {
			if ((n - z) % 2 == 1) n--;
			cout << n - z << '\n';
			for (int i=0;i<n-z;i++) cout << 1 << " ";
		}
		
		cout << '\n';
	}
	
	return 0;
}


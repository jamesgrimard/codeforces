// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int n; cin >> n;

		vector<int> a = {1,2,4,5,8,11};

		bool ans = true;

		for (int i=0;i<6;i++){
			if (n == a[i]) ans= false;
		}

		if (ans == true) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}

	return 0;
}


// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		vector<int> a(n);
		int cnt = 0;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (a[i] != 1 && cnt == 0) cnt = i + 1;
		}
		if (cnt % 2 == 1) {
			cout << "First\n";
		} else if (cnt % 2 == 0 && cnt != 0) {
			cout << "Second\n";
		} else {
			(n % 2 == 0) ? cout << "Second\n" : cout << "First\n";
		}
	}
	
	return 0;
}


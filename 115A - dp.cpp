// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	vector<int> a(tt);

	for (int i=0;i<tt;i++) {
		cin >> a[i];
	}

	int mx = 0;

	for (int i=0;i<tt;i++){
		int cnt = 1;

		int n = i;
		while (a[n] != -1) {
			n = a[n] - 1;
			cnt++;
		}

		if (cnt > mx) mx = cnt;
	}

	cout << mx;

	return 0;
}


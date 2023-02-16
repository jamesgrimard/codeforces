// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	int cnt = 0 , tally = 0;
	vector<int> a;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		if (i == 0) a.push_back(0);
		
		if (x < 0) {
			if (tally == 2) {
				cnt++;
				tally = 0;
				a.push_back(0);
			}
			a[cnt]++;
			tally++;
		}
		if (x >= 0) a[cnt]++;
	}

	cout << size(a) << '\n';
	for (auto k : a) cout << k << " ";

	return 0;
}




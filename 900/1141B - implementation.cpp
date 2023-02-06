// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	vector<int> a(n);

	for (int i=0;i<n;i++) cin >> a[i];
	
	int count = 0 , tally = 0;

	for (int i=0;i<a.size()*2;i++) {

		if (a[i % n] == 0) {
			if (tally > count) count = tally;
			tally = 0;
		} else {
			tally++;
		}
	}
	
	cout << count << '\n';

	return 0;
}


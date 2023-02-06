// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		
		vector<int> a(3);
		
		cin >> a[0] >> a[1] >> a[2];

		sort(a.begin(),a.end());

		(a[2] - a[1] > a[0]+1) ? cout << "No" : cout << "Yes";

		cout << '\n';
	}

	return 0;
}


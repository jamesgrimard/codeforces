// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	vector<int> a(4);

	for (int i=0;i<4;i++) cin >> a[i];

	sort(begin(a),end(a));

	if (a[0] + a[1] < a[2] && a[1] + a[2] < a[3]) {
		cout << "IMPOSSIBLE"; return 0;
	}

	if (a[0] + a[1] > a[2] || a[1] + a[2] > a[3]) {
		cout << "TRIANGLE"; return 0;
	}

	cout << "SEGMENT";

	return 0;
}


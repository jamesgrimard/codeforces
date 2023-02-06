// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int>a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));
	int cnt = 0;
	for (int i=0;i<n;i++) {
		if (a[i] > cnt) cnt++;
	}
	cout << cnt;

	return 0;
}
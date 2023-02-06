// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

bool isIntegral(float x) {
	if (ceil(x) == floor(x)) return true;
	return false;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n,m;
	cin >> n >> m;

	vector<int> a(n);

	for (int i=0;i<n;i++) {
		cin >> a[i];
	}

	sort(a.begin(),a.end());

	int total = 0;

	for (int i=0;i<m;i++) {
		if (a[i] >= 0) {
			cout << total;
			break;
		} else {
			total += (a[i] * -1);
		}
		if (i == m-1) cout << total;
	}

	return 0;
}


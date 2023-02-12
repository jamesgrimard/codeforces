// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	vector<int> a(6);
	int sum = 0;
	for (int i=0;i<6;i++) {
		cin >> a[i];
		sum += a[i];
	}
	bool ans = 0;
	sort(rbegin(a),rend(a));
	for (int i=1;i<6;i++) {
		for (int j=1;j<6;j++) {
			if (i == j) continue;
			if (a[0] + a[i] + a[j] == sum / 2 && sum % 2 == 0) ans = 1;
		}
	}
	(ans == 1) ? cout << "YES" : cout << "NO";

	return 0;
}




// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	vector<vector<int>> a(2);
	a[0].resize(tt); a[1].resize(tt);

	for (int i=0;i<tt;i++) {
		int sum = 0;
		for (int j=0;j<tt;j++) {
			int x;
			cin >> x;
			sum += x;
			a[0][j] += x;
		}
		a[1][i] = sum;
	}

	int count = 0;
	for (int i=0;i<tt;i++){
		for (int j=0;j<tt;j++){
			if (a[0][i] > a[1][j]) count++;
		}
	}

	cout << count << '\n';

	return 0;
}
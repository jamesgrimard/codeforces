// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k ; cin >> n >> k;
	vector<vector<int>> a(n);
	int count = 0;
	for (int i=0;i<n;i++) {
		a[i].resize(4);
		(i == 0) ? count = 1 : count += 2;
		if (count <= k) a[i][0] = count;
		if (count + 1 <= k) a[i][3] = count + 1;
		if (count + n * 2 <= k) a[i][1] = count + n * 2;
		if (count + 1 + n * 2 <= k) a[i][2] = count + 1 + n * 2;
	}
	for (int i=0;i<n;i++) {
		if (a[i][1] != 0) cout << a[i][1] << " ";
		if (a[i][0] != 0) cout << a[i][0] << " ";
		if (a[i][2] != 0) cout << a[i][2] << " ";
		if (a[i][3] != 0) cout << a[i][3] << " ";
	}

	return 0;
}




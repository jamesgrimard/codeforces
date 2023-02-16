// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , y , x; cin >> n >> y >> x;

	if (n > y*x) {
		cout << -1;
		return 0;
	}
	int count = 1;
	vector<vector<int>> a(y);
	for (int i=0;i<y;i++) {
		a[i].resize(x);
		for (int j=0;j<x;j++) {
			if (count <= n) a[i][j] = count;
			count++;
		}
		if (x % 2 == 0 && i % 2 == 1) {
			for (int j=x-1;j>=0;j--) cout << a[i][j] << " ";
		} else {
			for (int j=0;j<x;j++) cout << a[i][j] << " ";
		}
		cout << '\n';
	}

	

	return 0;
}




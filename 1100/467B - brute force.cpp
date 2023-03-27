// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , m , k ; cin >> n >> m >> k;

	vector<bitset<32>> a(m+1);
	for (int i=0;i<m+1;i++) {
		int x; cin >> x;
		bitset<32> b(x);
		a[i] = b;
	}

	vector<int> ref(m);

	for (int i=0;i<32;i++) {
		for (int j=0;j<m;j++) {
			if (a[j][i] != a[m][i]) ref[j]++;
		}
	}

	int cnt = 0;

	for (auto v:ref) {
		if (v <= k) cnt++;
	}


	cout << cnt;


	return 0;
}


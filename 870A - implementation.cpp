// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , m ; cin >> n >> m;

	vector<int> a(9) , b(9);

	int mna = 10 , mnb = 10;

	for (int i=0;i<n;i++) {
		int x; cin >> x;
		a[x-1] = x;
		if (x < mna) mna = x;
	}

	for (int i=0;i<m;i++) {
		int x; cin >> x;
		b[x-1] = x;
		if (x < mnb) mnb = x;
	}

	for (int i=0;i<9;i++) {
		if (a[i] == b[i] && a[i] != 0) {
			cout << a[i]; return 0;
		}
	}

	cout << min(mna,mnb) << max(mna,mnb);

	return 0;
}


// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	bool r = 0 , u = 0;

	vector<int> a(n);

	for (int i=0;i<n;i++){
		int x , y; cin >> x >> y; a[i] = x;
		if (x != y) r = 1;
	}

	for (int i=0;i<n-1;i++) {
		if (a[i] < a[i+1]) u = 1;
	}

	if (r == 1) {
		cout << "rated";
	} else if (u == 1) {
		cout << "unrated";
	} else {
		cout << "maybe";
	}

	return 0;
}


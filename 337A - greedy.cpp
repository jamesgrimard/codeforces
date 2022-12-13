// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt, mm;
	cin >> tt >> mm;

	vector<int> a(mm);
	for (int i=0;i<mm;i++){
		cin >> a[i];
	}

	sort(a.begin(),a.end());

	int mn;
	for (int i=(tt-1);i<mm;i++) {
		if (a[i] - a[i-(tt-1)] < mn || i == (tt-1)) {
			mn = a[i] - a[i-(tt-1)];
		}
	}

	cout << mn;

	return 0;
}
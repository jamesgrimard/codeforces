// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;

	vector<int> a(n);

	for (int i=0;i<n;i++) cin >> a[i];

	int tally = 0;

	for (int i=0;i<n;i++) {
		if (a[i] == 1) {
			tally++;
			if (i > 1 && a[i-1] == 0 && a[i-2] != 0) tally++;
		} 
	}

	cout << tally;


	return 0;
}
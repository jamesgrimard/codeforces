// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	vector<string> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	int mx = 0;
	for (int i=0;i<7;i++) {
		int tally = 0;
		for (int j=0;j<n;j++){
			if (a[j][i] == '1') tally++;
		}
		mx = max(tally,mx);
	}

	cout << mx;

	return 0;
}


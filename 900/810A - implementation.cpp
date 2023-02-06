// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;

	int total = 0 , tally =0;

	for (int i=0;i<n;i++) {
		int x; cin >> x;
		total += x;
	}

	while (round((float) total / (float) (n+tally)) < k) {
		tally++;
		total += k;
	}

	cout << tally;

	return 0;
}


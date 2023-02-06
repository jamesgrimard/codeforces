// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k ; cin >> n >> k;

	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(rbegin(a),rend(a));
	int count = 0 , tally = 0;
	for (int i=0;i<n;i++) {
		if (a[i] > k) {
			count++; continue;
		}
		int c = (k+1) / a[i];
		if ((k+1) % a[i] != 0) c++;
		n -= (c-1);
		if (n <= i) break;
		count++;
	}

	cout << count;

	return 0;
}


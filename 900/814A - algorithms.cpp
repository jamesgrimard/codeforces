// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	vector<int> a(n),b(k);
	bool ans = false;
	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=0;i<k;i++) cin >> b[i];
	sort(rbegin(b),rend(b));
	int tally = 0;
	for (int i=0;i<n;i++) {
		if (a[i] == 0) {
			a[i] = b[tally]; tally++;
		}
	}
	for (int i=1;i<n;i++) {
		if (a[i] < a[i-1]) ans = true;
	}
	
	(ans == true) ? cout << "Yes" : cout << "No";

	return 0;
}


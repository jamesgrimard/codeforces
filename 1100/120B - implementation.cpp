// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	//ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n ,k; cin >> n >> k;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];

	for (int i=0;i<=k+n;i++) {
		if (a[(k-1+i)%n] == 1) {
			cout << ((k-1+i) % n) + 1;
			break;
		}
	}

	return 0;
}

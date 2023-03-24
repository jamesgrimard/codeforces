// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	int mx = 0;
	long long sum = 0;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		sum += x;
		mx = max(mx,x);
	}

	cout << max(0LL,mx - (sum - mx) + 1);

	return 0;
}


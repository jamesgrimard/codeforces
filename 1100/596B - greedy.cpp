// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	int p = 0;

	long long sum = 0;

	for (int i=0;i<n;i++) {
		int x; cin >> x;
		sum += abs(x-p);
		p = x;
	}

	cout << sum;

	return 0;
}


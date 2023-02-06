// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	long long mx = 0;

	for (int i=0;i<n;i++) {
		long long x , y; cin >> x >> y;
		mx = max(mx,x+y);
	}

	cout << mx;


	return 0;
}


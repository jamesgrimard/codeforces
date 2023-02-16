// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	long long sum = 0 , p = 1;
	for (int i=0;i<k;i++) {
		int x; cin >> x;
		(x - p < 0) ? sum += (n - p + x) : sum += (x - p);
		p = x;
	}

	cout << sum;

	return 0;
}




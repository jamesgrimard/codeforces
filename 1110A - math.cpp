// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k ; cin >> n >> k;

	vector<int> a(n);

	int odd_count = 0 , last =0;

	for (int i=0;i<k;i++) {
		int x; cin >> x;
		if (x%2 == 1) odd_count++;
		if (i == k-1) last = x;
	}

	bool even = true;

	if (n % 2 == 0) {
		if (last % 2 == 1) even = false;
	} else {
		if (odd_count % 2 == 1) even = false; 
	}

	(even == true) ? cout << "even\n" : cout << "odd\n";

	return 0;
}


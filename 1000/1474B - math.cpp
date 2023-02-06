// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x) {
	for (int i=2;i<=sqrt(x);i++) {
		if (x % i == 0) return 0;
	}
	return 1;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;cin >> tt;

	vector<int> a;

	for (int i=1;i<=21000;i++) {
		if (isPrime(i) == 1) a.push_back(i);
	}

	while (tt--) {
		int d; cin >> d;
		int count = 1 , sum = 1 , p = 1;
		for (int i=1;i<size(a);i++) {
			if (a[i]-p >= d) {
				sum*=a[i];
				count++;
				p = a[i];
			}
			if (count == 3) break;
		}
		cout << sum << '\n';
	}
	return 0;
}

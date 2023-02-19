// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int p) {
	for (int i=2;i<=sqrt(p);i++) {
		if (p % i == 0) return 0;
	}
	return 1;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int n , k ; cin >> n >> k;

	vector<int> a;
	map<int,bool> m;

	for (int i=1;i<=n;i++) {
		if (isPrime(i) == 1) {
			a.push_back(i);
			m[i] = 1;
		}
	}
	int cnt = 0;
	for (int i=1;i<size(a);i++) {
		if (m[a[i] + a[i-1] + 1] == 1) cnt++;
	}

	(cnt >= k) ? cout << "YES" : cout << "NO";


	return 0;
}


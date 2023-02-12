// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n , k; cin >> n >> k;
	vector<long long> a(n);
	for (long long i=0;i<n;i++) {
		cin >> a[i];
	}
	long long p = sqrt(1+k*8);
	p = (-1 + p) / 2;
	long long q = (p * p + p) / 2;

	(k - q == 0) ? cout << a[p-1] : cout << a[k-q-1];



	return 0;
}




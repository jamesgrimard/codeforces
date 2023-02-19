// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n , k; cin >> n >> k;
	long long N = n;
	int cnt = 0;
	while (N < k) {
		cnt++;
		N *= n;
	}

	if (N == k) {
		cout << "YES" << '\n';
		cout << cnt << '\n';
	} else {
		cout << "NO";
	}


	return 0;
}


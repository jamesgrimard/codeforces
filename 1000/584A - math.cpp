// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;

	if (n == 1 && k == 10) {
		cout << -1;
		return 0;
	}

	if (k == 10) {
		cout << "1";
		for (int i=0;i<n-1;i++) cout << "0";
	} else {
		for (int i=0;i<n;i++) cout << k;
	}

	return 0;
}




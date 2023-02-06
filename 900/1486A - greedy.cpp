// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while(tt--) {
		int n;
		cin >> n;

		long long sum = 0;
		bool ans = true;
		for (int i=0;i<n;i++){
			int x;
			cin >> x;
			sum += x;
			if (sum < ((i*i + i) / 2)) ans = false;
		}

		(ans == true) ? cout << "YES" : cout << "NO";

		cout << '\n';
	}

	return 0;
}
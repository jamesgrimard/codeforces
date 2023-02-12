// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int k , n ; cin >> k >> n;
	vector<int> a = {n};
	while (n > k) {
		if (n % 10 == 1) {
			n /= 10; a.push_back(n);
			continue;
		}
		if (n % 2 == 0) {
			n /= 2; a.push_back(n);
			continue;
		}
		break;
	}

	if (n == k) {
		cout << "YES\n" << size(a) << '\n';
		for (int i=size(a)-1;i>=0;i--) cout << a[i] << " ";
	} else {
		cout << "NO\n";
	}
	return 0;
}




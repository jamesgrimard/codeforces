// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int k = ceil((float) n / (float) 4);
		for (int i=0;i<n-k;i++) cout << 9;
		for (int i=0;i<k;i++) cout << 8;
		cout << '\n';
	}

	return 0;
}

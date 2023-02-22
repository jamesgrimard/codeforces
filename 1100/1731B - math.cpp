// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
const int n1=1e9+7;

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n; cin >> n;
		cout << 337*n%n1*(n + 1)%n1*(4*n%n1 - 1)%n1 << '\n';
	}
		

	return 0;
}


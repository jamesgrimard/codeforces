// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int a , b ,c; cin >> a >> b >> c;

		long long mx = abs(a-b)+abs(a-c)+abs(b-c);

		cout << max(mx-4LL,0LL) << '\n';
	}

	return 0;
}


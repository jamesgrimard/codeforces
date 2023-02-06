// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long a , b; cin >> a >> b;
		if (a == a*b) {
			cout << "NO";
		} else {
			cout << "YES\n";
			cout << (a*b*2-a) << " " << a  << " " << (a*b*2);
		}
		cout << '\n';
	}

	return 0;
}

// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string a , b; cin >> a >> b;

	int k = size(a) + size(b);

	for (int i=0;i<min(size(a),size(b));i++) {
		if (a[size(a)-1-i] == b[size(b)-1-i]) {
			k -= 2;
		} else {
			break;
		}
	}

	cout << k << '\n';

	return 0;
}


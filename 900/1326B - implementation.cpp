// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	int p = 0;
	for (int i=0;i<tt;i++){
		int x;
		cin >> x;
		if (x < 0) {
			cout << (p + x) << " ";
		} else {
			p += x;
			cout << p << " ";
		}

	}

	return 0;
}
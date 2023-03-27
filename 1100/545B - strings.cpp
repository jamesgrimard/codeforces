// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string a,b; cin >> a >> b;
	int cnt = 0;
	for (int i=0;i<a.size();i++) {
		if (a[i] != b[i]) cnt++;
	}
	if (cnt % 2 == 0) {
		bool f= 1;
		for (int i=0;i<a.size();i++) {
			if (a[i] == b[i]) {
				cout << a[i];
			} else {
				if (f == 0) {
					cout << b[i];
					f = 1;
				} else {
					cout << a[i];
					f = 0;
				}
			}
		}
	} else {
		cout << "impossible";
	}


	return 0;
}


// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (i % 2 == 0) {
				(j % 2 == 0) ? cout << "B" : cout << "W";
			} else {
				(j % 2 == 0) ? cout << "W" : cout << "B";
			}
		}
		cout << '\n';
	}

	


	return 0;
}


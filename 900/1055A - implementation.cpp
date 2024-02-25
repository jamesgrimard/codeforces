// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k ; cin >> n >> k;

	vector<int> a(n) , b(n);

	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=0;i<n;i++) cin >> b[i];

	if (a[0] == 1) {
		if (a[k-1] == 1) {
			cout << "YES"; return 0;
		} else {
			for (int i=k;i<n;i++) {
				if (a[i] == 1 && b[i] == 1 && b[k-1] == 1) {
					cout << "YES"; return 0;
				}
			}
		}
	}

	cout << "NO";


	return 0;
}
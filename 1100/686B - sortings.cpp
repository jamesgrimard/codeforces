// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];

	for (int i=0;i<n-1;i++) {
		for (int j=0;j<n-1-i;j++) {
			if (a[j] > a[j+1]) {
				swap(a[j],a[j+1]);
				cout << j+1 << " " << j+2 << '\n';
			}
		}
	}


	return 0;
}


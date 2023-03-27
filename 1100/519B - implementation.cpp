// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<long long> a(3);
	for (int i=0;i<3;i++) {
		for (int j=0;j<n-i;j++) {
			int x;  cin >> x;
			a[i] += x;
		}
	}

	cout << a[0] - a[1] << '\n';
	cout << a[1] - a[2] << '\n';


	return 0;
}


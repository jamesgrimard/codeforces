// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k ; cin >> n >> k;

	vector<int> a(n);

	for (int i=0;i<n;i++) cin >> a[i];

	sort(begin(a),end(a));

	for (int i=n-1;i>=0;i--){
		if (a[i] <=k && k%a[i] == 0) {
			cout << (k/a[i]); break;
		}
	}

	return 0;
}


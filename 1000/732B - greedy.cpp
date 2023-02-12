// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n>> k;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	int count = 0;
	for (int i=1;i<n;i++) {
		count += max(k - (a[i-1]+a[i]),0);
		a[i] += max(k - (a[i-1]+a[i]),0);
	}
	cout << count << '\n';
	for (auto v : a) cout << v << " ";	


	return 0;
}




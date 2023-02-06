// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ;cin >> n;
	vector<int> a(2*n);
	for (int i=0;i<2*n;i++) cin >> a[i];
	sort(begin(a),end(a));
	long long s1 = 0 , s2 = 0;
	for (int i=0;i<n;i++) {
		s1 += a[i];
		s2 += a[2*n-1-i];
	}

	if (s1 == s2) {
		cout << -1; return 0;
	}

	for (int i=0;i<2*n;i++) cout << a[i] << " ";

	return 0;
}
// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	int total = 0;
	vector<int> a(n);
	for (int i=0;i<n;i++) {
		cin >> a[i];
		total += a[i];
	}
	int cnt = 0;
	for (int i=1;i<=5;i++) {
		if ((total+i) % (n+1) != 1) cnt++;
	}

	cout << cnt;

	return 0;
}




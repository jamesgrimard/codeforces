// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	int index = 0;
	for (int i=0;i<n;i++) {
		cin >> a[i];
		if (a[i] == n) index = i;
	}
	bool ans = 1;
	for (int i=index+1;i<n;i++) {
		if (a[i] > a[i-1]) {ans = 0;break;}
	}
	for (int i=index-1;i>=0;i--) {
		if (a[i] > a[i+1]) {ans = 0;break;}
	}
	
	(ans == 1) ? cout << "YES\n" : cout << "NO\n";

	return 0;
}
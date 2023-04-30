// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	string s; cin >> s;
	vector<int> a(n),b(n);
	for (int i=0;i<n;i++) {
		(s[i] == '(') ? a[i] = 1 : b[i] = 1;
		if (i > 0) {
			a[i] += a[i-1];
			b[i] += b[i-1];
		}
	}
	bool ans = 1;
	for (int i=0;i<n;i++) {
		if (a[i] - b[i] < -1 || (i == n-1 && a[i]-b[i] != 0)) ans = 0;
	}

	if (ans == 0) {
		cout << "No\n";
	} else {
		cout << "Yes\n";
	}

	return 0;
}
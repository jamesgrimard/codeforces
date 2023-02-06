// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	string s; cin >> s;

	for (int i=1;i<n;i++) {
		if (s[i] < s[i-1]) {
			cout << "YES\n" << i << " " << (i+1); return 0;
		}
	}
	cout << "NO\n";

	return 0;
}
// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;

	string s; cin >> s;

	for (int i=2;i<=n/2;i++){
		if (n % i == 0) {
			for (int j=0;j<i/2;j++) {
				swap(s[j],s[i-1-j]);
			}
		}
	}

	for (int i=n-1;i>=0;i--) cout << s[i];

	return 0;
}


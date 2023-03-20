// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n; cin >> n;
		string s; cin >> s;
		long long cnt = 0;
		for (int i=0;i<size(s);i++) if (s[i] == '9') cnt++;
		cout << n * max(cnt,(long long)size(s)-1) << '\n';
	}

	return 0;
}


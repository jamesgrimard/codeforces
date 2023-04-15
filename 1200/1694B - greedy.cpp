// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		string s; cin >> s;
		long long cnt = 0;
		for (int i=n-1;i>=1;i--) {
			if (s[i] == '1' && s[i-1] == '0') cnt += i;
			if (s[i] == '0' && s[i-1] == '1') cnt += i;
		}

		cout << cnt + n << '\n';
	}


	return 0;
}
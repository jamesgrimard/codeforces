// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long N ; cin >> N;
		string s = to_string(N);
		for (int i=0;i<size(s);i++) {
			if (s[i] - '0' != 0 && N % (s[i]-'0') != 0) {
				N++; i = -1;
			}
			s = to_string(N);
		}
		cout << N << '\n';
	}


	return 0;
}

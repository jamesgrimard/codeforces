// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int n ;cin >> n;
		string s , S; cin >> s >> S;
		for (int i=0;i<n;i++) {
			if (s[i] != S[i]) {
				for (int j=0;j<n;j++) {
					if (i == j) continue;
					if (s[j] == s[i] && S[j] == S[i]) {
						swap(s[i],S[j]);
						goto out;
					}
				}
			}
		}
		out: (s == S) ? cout << "Yes\n" : cout << "No\n";
	}


	return 0;
}



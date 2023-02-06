// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n , q; cin >> n >> q;

		string s; cin >> s;

		while (q--) {

			int l , r; cin >> l >> r;

			string ref = "";
			for (int i=l-1;i<=r-1;i++) {
				ref += s[i];
			}

			string ans = "";
			int count = 0; bool jump = false;

			for (int i=0;i<n;i++) {
				if (s[i] == ref[count]) {
					ans += s[i];
					count++;

					if (s[i+1] != ref[count]) {
						jump = true; 
						i++;
						continue;
					}

					if (jump == false && count == size(ref)-1) { // force jump
						i++;
						jump = true;
					}
				}
				if (count == size(ref)) break;
			}

			(ans == ref) ? cout << "YES" : cout << "NO";
			cout << '\n';
		}

	}


	return 0;
}


// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		int cnt1 = 0 , cnt2 = 0;
		for (int i=0;i<n;i++) (s[i] == '1') ? cnt1++ : cnt2++;
		if (cnt2 < 3 && cnt2 > 0) {
			cout << "NO\n"; continue;
		}
		char a[n][n];
		for (int i=0;i<n;i++) {
			bool flag = 0;
			for (int j=i;j<n;j++) {
				if (i == j) {
					a[i][j] = 'X'; 
				} else if (s[i] == '1' || s[j] == '1') {
					a[i][j] = '='; a[j][i] = '=';
				} else if (flag == 0) {
					a[i][j] = '+'; flag = 1;
					a[j][i] = '-';
				} else {
					a[i][j] = '-'; a[j][i] = '+';
				}
			}
		}
		cout << "YES\n";
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++) cout << a[i][j];
			cout << '\n';
		}		
	}


	return 0;
}

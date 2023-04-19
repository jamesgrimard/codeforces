// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , m; cin >> n >> m;
		vector<string> a(n) , b(n-1);
		vector<vector<int>> ab(m,vector<int> (26));
		for (int i=0;i<n;i++) {
			cin >> a[i];
			for (int j=0;j<m;j++) ab[j][a[i][j]-'a']++;
		}
		for (int i=0;i<n-1;i++) {
			cin >> b[i];
			for (int j=0;j<m;j++) ab[j][b[i][j]-'a']--;
		}
		for (int i=0;i<m;i++) {
			for (int j=0;j<26;j++) if (ab[i][j] == 1) cout << char(j+97);
		}
		cout << '\n';
	}

	return 0;
}
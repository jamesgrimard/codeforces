// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<string> a(n);
		map<string,bool> m;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			m[a[i]] = 1;
		}
		for (int i=0;i<n;i++) {
			bool ans = 0;
			for (int j=0;j<size(a[i])-1;j++) {
				if (m[a[i].substr(0,j+1)] == 1 && m[a[i].substr(j+1,size(a[i])-(j+1))] == 1) {ans = 1;break;}
			}
			(ans == 1) ? cout << 1 : cout << 0;
		}
		cout << '\n';
	}

	return 0;
}


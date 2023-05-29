// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n , m; cin >> n >> m;
	vector<string> a(n);
	vector<int> s(m);
	for (int i=0;i<n;i++) {
		cin >> a[i];
		for (int j=0;j<m;j++) {
			s[j] += (a[i][j]-'0');
		}
	}
	for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			if (a[j][i] == '1') a[j][i] = char(min(s[i],2)+48);
		}
	}
	bool ans = 0;
	for (int i=0;i<n;i++) {
		bool f= 1;
		for (int j=0;j<m;j++) {
			if (a[i][j] == '1') f= 0;

		}

		if (f) ans = 1;
	}

	ans == 1 ? cout << "YES\n" : cout << "NO\n";

	return 0;	
}

		
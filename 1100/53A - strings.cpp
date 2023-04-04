// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	string s; cin >> s;
	int n; cin >> n;
	vector<string> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));
	
	for (int i=0;i<n;i++) {
		if (a[i].size() >= s.size()) {
			for (int j=0;j<s.size();j++) {
				if (a[i][j] != s[j]) {
					break;
				}
				if (j == s.size()-1) {
					s = a[i];
					goto out;
				}
			}
		}
	}	

	out: cout << s;


	return 0;
}

// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n, k; cin >> n >> k;
	vector<vector<int>> r(26);
	string s; cin >> s;
	int cnt = 0;
	for (int i=0;i<n;i++) r[s[i]-'a'].push_back(i);
	for (int i=0;i<26;i++) {
		for (int j=0;j<r[i].size();j++) {
			s[r[i][j]] = '0';
			cnt++;
			if (cnt == k) break;
		}
		if (cnt == k) break;
	}
	for (int i=0;i<n;i++) if (s[i] != '0') cout << s[i];

	return 0;	
}
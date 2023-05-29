// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(26),r(n);
	a[0] = 1 , a[4] = 1 , a[8] = 1, a[14] = 1,  a[24] = 1, a[20] = 1;

	for (int i=0;i<n;i++) cin >> r[i];
		cin.ignore();
	bool ans = 1;
	for (int i=0;i<n;i++) {
		int cnt = 0;
		string s;
		getline(cin,s);
		for (int j=0;j<s.size();j++) if (s[j] != ' ' && a[s[j]-'a'] == 1) cnt++;
		if (cnt != r[i]) ans = 0;
	}
	
	ans == 1 ? cout << "YES\n" : cout << "NO\n";

	return 0;	
}

		
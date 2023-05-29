// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	string s; cin >> s;
	vector<int> a(26);
	for (int i=0;i<s.size();i++) a[s[i]-'a']++;
	bool ans = 1;
	for (int i=3;i<26;i++) if (a[i] != 0) ans = 0;
	if (a[2] != a[1] && a[2] != a[0]) ans = 0;
	if (a[1] == 0 || a[0] == 0) ans = 0;
	char c=  'a';
	for (int i=0;i<s.size();i++) {
		if (s[i] != c) ans = 0;
		if (i < s.size()-1 && s[i+1] != s[i]) {
			(c == 'a') ? c = 'b' : c = 'c';
		}
	}
	ans == 1 ? cout << "YES\n" : cout << "NO\n";

	return 0;	
}

		
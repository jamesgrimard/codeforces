// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		string s,S = ""; cin >> s;
		vector<int> a(26,-1);
		for (int i=0;i<s.size();i++) {
			if (a[s[i]-'a'] == -1) {
				a[s[i]-'a'] = i;
			} else {
				S += s[i];
				S += s[i];
				for (int j=0;j<26;j++) a[j] = -1;
			}
		}
		cout << s.size()-S.size() << '\n';
		
	}

	
	return 0;	
}
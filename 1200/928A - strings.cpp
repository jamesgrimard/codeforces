// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	string s; cin >> s;
	for (int i=0;i<s.size();i++) if (s[i] != '_') s[i] = tolower(s[i]);
	int n; cin >> n;
	vector<string> a;
	bool f = 1;
	for (int i=0;i<n;i++) {
		string tmp; cin >> tmp;
		if (tmp.size() != s.size()) continue;
		for (int j=0;j<tmp.size();j++) if (tmp[j] != '_') tmp[j] = tolower(tmp[j]);
		for (int j=0;j<s.size();j++) {
			if (s[j] != tmp[j] && s[j] != '1' && s[j] != 'l' && s[j] != 'i' && s[j] != '0' && s[j] != 'o') break; 
			if (s[j] != tmp[j]) {
				if (s[j] == '1' && (tmp[j] != 'l' && tmp[j] != 'i')) break;
				if (s[j] == 'i' && (tmp[j] != 'l' && tmp[j] != '1')) break;
				if (s[j] == 'l' && (tmp[j] != 'i' && tmp[j] != '1')) break;
				if (s[j] == '0' && (tmp[j] != 'o')) break;
				if (s[j] == 'o' && (tmp[j] != '0')) break;	
			}
				
			if (j == s.size()-1) f = 0;
		}
	}

	f == 1 ? cout << "Yes\n" : cout << "No\n";

	return 0;	
}

		
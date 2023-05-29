// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	int l = -1 , r = s.size(); 
	for (int i=0;i<s.size();i++) {
		if (s[i] != 'a' && l == -1) l = i;
		if (s[i] == 'a' && l != -1) {
			r = i;
			break; 
		}
	}
	if (l != -1) for (int i=l;i<r;i++) s[i] = char(s[i]-'a'+96);
	if (l == -1) s[s.size()-1] = 'z';
	cout << s;
	

	return 0;	
}

		
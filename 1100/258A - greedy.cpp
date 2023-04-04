// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 	
	string s; cin >> s;
	for (int i=0;i<s.size();i++) {
		if (s[i] == '0' || i == s.size()-1) {
			s.replace(i,1,"");
			break;
		}
	}

	cout << s;

	return 0;
}

// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	string s; cin >> s;

	if (s[0] == 'f') {
		s = s.substr(0,3) + "://" + s.substr(3,s.size()-3);
	} else {
		s = s.substr(0,4) + "://" + s.substr(4,s.size()-4);
	}

	for (int i=s.size()-1;i>=0;i--) {
		if (s[i] == 'r' && s[i+1] == 'u') {
			s.replace(i,2,".ru/");
			break;
		}
	}

	if (s[s.size()-1] == '/') s.replace(s.size()-1,1,"");

	cout << s;

	return 0;
}

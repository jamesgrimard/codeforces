// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		int l = 0 , r = 0 , d = 0 , u = 0;
		for (int i=0;i<s.size();i++) {
			if (s[i] == 'D') d++;
			if (s[i] == 'U') u++;
			if (s[i] == 'R') r++;
			if (s[i] == 'L') l++;
		}
		if (u == 0 || d == 0) r = min(r,1);
		if (l == 0 || r == 0) u = min(u,1);
		cout << (min(l,r)+min(u,d))*2 << '\n';
		for (int i=0;i<min(l,r);i++) cout << "L";
		for (int i=0;i<min(u,d);i++) cout << "U";
		for (int i=0;i<min(l,r);i++) cout << "R";
		for (int i=0;i<min(d,u);i++) cout << "D";
		cout << '\n';
	}
	
	return 0;
}
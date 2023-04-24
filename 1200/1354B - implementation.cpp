// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		int one = -1 , two = -1 , three = -1 , mn = 0;
		for (int i=0;i<s.size();i++) {
			if (s[i] == '1') one = i;
			if (s[i] == '2') two = i;
			if (s[i] == '3') three = i;
			if (one != -1 && two != -1 && three != -1) {
				if (mn == 0 || (max(one,max(two,three))-min(one,min(two,three)) < mn)) {
					mn = max(one,max(two,three))-min(one,min(two,three)) + 1;
				}
			}
		}
		cout << mn << '\n';
	}

	return 0;
}
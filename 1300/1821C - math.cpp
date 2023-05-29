// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	
	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		int mn = -1;
		for (int i=0;i<26;i++) {
			int tally = 0, mx = 0;
			for (int j=0;j<s.size();j++) {
				if (s[j] == 'a'+i) {
					mx = max(mx,tally);
					tally = 0;
					continue;
				}
				if (j == s.size()-1) {
					mx = max(mx,tally+1);
				}
				tally++;
			}
			if (mn == -1 || mx < mn) mn = mx;
		}
		int cnt = 0;
		while (mn >= 1) {
			cnt++;
			mn /= 2;
		}
		cout << cnt << '\n';
	}


	return 0;	
}

		
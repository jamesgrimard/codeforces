// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	map<string,bool> m1,m2,m3;
	string ss = "a" , s = "aa" , S = "aaa";
	for (int i=0;i<26;i++) {
		ss[0] = char(i+97);
		m1[ss] = 1;
	}
	for (int i=0;i<26;i++) {
		s[0] = char(i+97);
		for (int j=0;j<26;j++) {
			s[1] = char(j+97);
			m2[s] = 1;
		}
	}
	for (int i=0;i<26;i++) {
		S[0] = char(i+97);
		for (int j=0;j<26;j++) {
			S[1] = char(j+97);
			for (int k=0;k<26;k++) {
				S[2] = char(k+97);
				m3[S] = 1;
			}
		}
	}

	int tt; cin >> tt;
	while (tt--) {
		map<string,bool> M1,M2,M3;
		int n; cin >> n;
		string SS; cin >> SS;
		for (int i=0;i<n;i++) {
			for (int j=1;j<=3;j++) {
				if (i+j > n) continue;
				if (j == 1) {
					M1[SS.substr(i,j)] = 1;
				} else if (j == 2) {
					M2[SS.substr(i,j)] = 1;
				} else {
					M3[SS.substr(i,j)] = 1;
				}
			}
		}
		string ans;		

		for (auto [k,v] : m3) {
			if (M3[k] == 0) {
				ans = k;
				break;
			}
		}
		for (auto [k,v] : m2) {
			if (M2[k] == 0) {
				ans = k;
				break;
			}
		}
		for (auto [k,v] : m1) {
			if (M1[k] == 0) {
				ans = k;
				break;
			}
		}
		cout << ans << '\n';
	}
	
	return 0;
}
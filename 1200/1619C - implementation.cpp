// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string a , s; cin >> a >> s;
		int n = a.size() , N = s.size() , shift = 0;
		string S = "";
		bool ans = 1;
		for (int i=1;i<=n;i++) {
			if (a[n-i] > s[N-i-shift]) {
				if (s[N-i-shift-1] != '1') {
					ans = 0; 
					break;
				}
				int k = 10 + (s[N-i-shift] - '0') - (a[n-i]-'0');
				S = to_string(k) + S;
				shift++;
			} else {
				S = to_string((s[N-i-shift]-a[n-i])) + S;
			}	
			if (i == n) S = s.substr(0,N-i-shift) + S;
		}
		if (ans == 0) {
			cout << -1 << '\n';
		} else {
			int index = 0;
			for (int i=0;i<S.size();i++) {
				if (S[i] != '0') {
					index = i;
					break;
				}
			}
			cout << S.substr(index,S.size()-index) << '\n';
		}
	}

	return 0;
}
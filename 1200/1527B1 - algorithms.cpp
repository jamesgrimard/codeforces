// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		int cnt = 0;
		for (int i=0;i<n;i++) {
			if (s[i] == '0') cnt++;
		}
		if (n % 2 == 1 && s[n/2] == '0' && cnt > 1) {
			cout << "ALICE\n";
		} else {
			cout << "BOB\n";
		}
	}

	
	return 0;
}
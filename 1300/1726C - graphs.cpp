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
		for (int i=1;i<2*n;i++) {
			if (s[i] == '(' && s[i-1] == '(') cnt++;
		}
		cout << cnt + 1 << '\n';
	}

	return 0;	
}
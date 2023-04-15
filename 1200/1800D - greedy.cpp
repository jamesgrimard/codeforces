// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		int cnt = 1;
		for (int i=0;i<n-2;i++) {
			if (s[i] != s[i+2]) cnt++;
		}
		cout << cnt << '\n';
	}
 
	return 0;
}
// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		bool flag = 1;
		
		for (int i=1;i<size(s);i++) {
			if (s[i] > s[0]) break;
			if (s[i] < s[0]) {
				flag = 0; break;
			}
		} 
		
		
		int count = (size(s)-1)*9 + (s[0]-'0');
		if (flag == 0) count--;
		cout << count << '\n';
	}

	return 0;
}

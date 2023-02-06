// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt; 
	while (tt--) {
		int n ;cin >> n;
		string s; cin >> s;
		int x = 0 , y = 0;
		for (int i=0;i<n;i++) {
			if (s[i] == '(') y++;
			if (s[i] == ')' && y-1 >= 0) y--;
			if (s[i] == ')' && y-1 < 0) x++;
		}
		cout << min(x,y) << '\n';
	}


	return 0;
}

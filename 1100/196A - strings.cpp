// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	string S = "";
	char c = '0';
	for (int i=s.size()-1;i>=0;i--) {
		if (s[i] >= c) {
			S = s[i] + S;
			c = s[i];
		}
	}
	cout << S;

	return 0;
}

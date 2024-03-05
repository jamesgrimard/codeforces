#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie();

	
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		char c = s[0];
		string a = "";
		a += c;
		for (int i=2;i<n;i++) {
			if (s[i-1] == a[a.size()-1]) {
				a += s[i];
				i++;
			}
		}
		cout << a << '\n';
	}


	return 0;
}
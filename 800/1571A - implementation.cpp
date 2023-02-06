// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {
		string s;
		cin >> s;

		int count = 0;
		int a(0),b(0);
		for (int i=0;i<size(s);i++) {
			if (s[i] == '<') {
				count++;
				a = 1;
			} else if (s[i] == '>') {
				count--;
				b = 1;
			}
		}
		
		if (a == 1 && b == 1) {
			cout << "?" << endl;
		} else if (count > 0) {
			cout << "<" << endl;
		} else if (count == 0) {
			cout << "="  << endl;
		} else {
			cout << ">" << endl;
		}
	}

	return 0;
}
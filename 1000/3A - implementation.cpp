// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	string s,S; cin >> s >> S;

	cout << max(abs(s[0]-S[0]),abs(s[1]-S[1])) << '\n';

	int x1 = s[0]-'a'+1 , y1 = s[1]-'0';
	int x2 = S[0]-'a'+1 , y2 = S[1]-'0';

	while (x1 < x2) {
		if (x1 == x2 && y1 == y2) break;
		if (y1 < y2) {
			cout << "RU" << '\n';
			x1++;y1++;
		} else if (y1 > y2) {
			cout << "RD" << '\n';
			x1++;y1--;
		} else {
			cout << "R" << '\n';
			x1++;
		}
	}

	while (x1 > x2) {
		if (x1 == x2 && y1 == y2) break;
		if (y1 < y2) {
			cout << "LU" << '\n';
			x1--;y1++;
		} else if (y1 > y2) {
			cout << "LD" << '\n';
			x1--;y1--;
		} else {
			cout << "L" << '\n';
			x1--;
		}
	}

	while (x1 == x2) {
		if (y2 == y1) break;
		if (y1 < y2) {
			cout << "U" << '\n';
			y1++;
		} else if (y1 > y2) {
			cout << "D" << '\n';
			y1--;
		}
	}


	return 0;
}


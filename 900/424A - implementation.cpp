// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	string s; cin >> s;

	map<char,int> m;

	for (int i=0;i<n;i++) m[s[i]]++;

	int tally = 0;

	for (int i=0;i<n;i++) {
		if (m['X']-m['x'] < 0) {
			if (s[i] == 'x') {
				s[i] = 'X'; m['X']++; m['x']--; tally++;
			}
		} else if (m['X']-m['x'] > 0) {
			if (s[i] == 'X') {
				s[i] = 'x'; m['x']++;m['X']--; tally++;
			}
		}
	}
	

	cout << tally << '\n';
	cout << s;

	return 0;
}


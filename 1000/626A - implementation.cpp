// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	string s; cin >> s;
	map<char,int> m;
	m['U'] = 1 , m['R'] = 1 , m['D'] = -1 , m['L'] = -1;
	int count = 0;
	for (int i=0;i<n;i++) {
		int v = 0 , h = 0;
		for (int j=i;j<n;j++) {
			(s[j] == 'U' || s[j] == 'D') ? v += m[s[j]] : h += m[s[j]];
			if (v == 0 && h == 0) {
				count++;
			}
		}
	}
	cout << count;

	return 0;
}




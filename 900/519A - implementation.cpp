// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	map<char,int>m;

	m['q'] = 9; m['Q'] = 9;
	m['r'] = 5; m['R'] = 5;
	m['b'] = 3; m['B'] = 3;
	m['n'] = 3; m['N'] = 3;
	m['p'] = 1; m['P'] = 1;
	m['k'] = 0; m['K'] = 0;

	int sum1 = 0 , sum2 = 0;

	for (int i=0;i<8;i++){
		string s; cin >> s;
		for (int j=0;j<8;j++){
			if (isupper(s[j])) {
				sum1 += m[s[j]];
			} else if (s[j] != '.') {
				sum2 += m[s[j]];
			}
		}
	}

	if (sum1 == sum2) {
		cout << "Draw";
	} else if (sum1 > sum2) {
		cout << "White";
	} else {
		cout << "Black";
	}
	cout << '\n';
	return 0;
}


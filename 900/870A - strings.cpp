// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;

	string a = s + s;
	int tally = 0;
	for (int i=0;i<size(s);i++) {
		string S = "" ;
		for (int j=0;j<size(s);j++) S+=a[i+j];
		if (s == S && i != 0) break;
		tally++;
		//cout << S << '\n';
	}

	cout << tally;

	return 0;
}


// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;

	regex r("CCCCC");
	s = regex_replace(s,r,"X");
	regex R("PPPPP");
	s= regex_replace(s,R,"Y");

	int tally = 1;

	for (int i=1;i<size(s);i++) {
		if (s[i] != s[i-1] || s[i-1] == 'Y' || s[i-1] == 'X') tally++;
	}
	cout << tally;

	

	return 0;
}


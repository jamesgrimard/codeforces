// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	string one = "" , two = "";
	for (int i=0;i<size(s);i++) {
		one += s[i];
		if (s[i] != 'a') two += s[i];
		if (size(one) + size(two) == size(s)) break;
	}
	(one + two == s) ? cout << one : cout << ":(";

	return 0;
}


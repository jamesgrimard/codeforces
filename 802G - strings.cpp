// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s;
	cin >> s;

	string ref = "heidi";
	int i = 0;
	for (int j=0;j<s.size();j++) {
		if (ref[i] == s[j]) i++; 
	}

	(i == 5) ? cout << "YES" : cout << "NO";

	cout << endl;

	return 0;
}
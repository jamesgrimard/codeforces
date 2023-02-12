// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s ; cin >> s;
	int count = 0;
	for (int i=0;i<size(s)/2;i++) {
		if (s[i] != s[size(s)-1-i]) count++;
	}

	(count == 1 || (size(s) % 2 == 1 && count == 0)) ? cout << "YES" : cout << "NO";

	return 0;
}




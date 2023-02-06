// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	bool flag=  0;
	for (int i=1;i<size(s);i++) {
		if (s[i] == '1' && size(s)%2 != 0) flag= 1;
	}

	(flag == 1) ? cout << (size(s)/2+1) : cout << (size(s)/2);


	return 0;
}
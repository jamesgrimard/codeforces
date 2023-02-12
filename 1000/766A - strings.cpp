// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s , S; cin >> s >> S;
	if (size(s) < size(S)) swap(s,S);
	for (int i=0;i<size(s);i++) {
		int k = S.find(s.substr(0,size(s)-i));
		if (k == -1) {
			cout << size(s) - i;
			return 0;
		}
	}

	cout << -1;

	return 0;
}




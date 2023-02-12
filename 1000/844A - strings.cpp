// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s ;cin >> s;
	int n ; cin >> n;
	map<char,int> m;
	for (int i=0;i<size(s);i++) m[s[i]]++;
	if (size(s) < n) {
		cout << "impossible";
	} else {
		cout << max(n - (int)size(m),0);
	}

	return 0;
}




// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	string s; cin >> s;
	int a = 0, f = 0 , k = 0;
	for (int i=0;i<n;i++) {
		if (s[i] == 'A')a++;
		if (s[i] == 'I')k++;
		if (s[i] == 'F')f++;
	}
	if (k >= 1) {
		(k == 1) ? cout << 1 : cout << 0;
	} else {
		cout << a;
	}
	return 0;
}




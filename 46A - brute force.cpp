// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	int sum = 1;
	for (int i=1;i<tt;i++) {
		sum += i;
		if ((sum % tt == 0) ? cout << tt : cout << (sum % tt));
		cout << ' ';
	}

	cout << '\n';
	
	return 0;
}
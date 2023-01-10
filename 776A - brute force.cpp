// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string a , b; cin >> a >> b;
	cout << a << " " << b<<'\n';
	int n; cin >> n;

	while (n--) {
		string x ,y ; cin >> x >> y;
		(x == a) ? a = y : b = y;
		cout << a << " " << b << '\n';
	}


	return 0;
}


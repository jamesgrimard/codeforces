// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string a, b ; cin >> a >> b;

	int x = stoi(a.substr(0,2)) , y = stoi(a.substr(3,2)) , X = stoi(b.substr(0,2)) , Y = stoi(b.substr(3,2));
	int sum = 0;

	x = (x*60) + y;
	X = (X*60) + Y;

	if (x < X) {
		sum = 1440-X + x;
	} else {
		sum = x - X;
	}

	if (sum/60 < 10) cout << "0";
	cout << (sum/60) << ":";
	if (sum % 60 < 10) cout << "0";
	cout << (sum%60);

	return 0;
}


// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int a,b;
	cin >> a >> b;

	for (int i=0;i<(b - (a%b));i++) {
		cout << (a / b) << ' ';
	}
	for (int i=0;i<(a % b);i++) {
		cout << (a / b +1) << ' ';
	}

	cout << endl;

	return 0;
}
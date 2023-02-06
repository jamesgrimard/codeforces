// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int x,y;
	cin >> x >> y;

	if ((min(x,y) & 1) == 1) {
		cout << "Akshat";
	} else {
		cout << "Malvika";
	}

	return 0;
}


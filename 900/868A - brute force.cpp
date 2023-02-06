// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string pw; cin >> pw;

	int n; cin >> n;

	bool A = 0 , X = 0 , Y = 0;

	for (int i=0;i<n;i++) {
		string x; cin >> x;
		if (x == pw) A = 1;
		if (x[1] == pw[0]) Y = 1;
		if (x[0] == pw[1]) X = 1;
	}

	(A == 1 || (X == 1 && Y == 1)) ? cout << "YES" : cout << "NO";


	return 0;
}


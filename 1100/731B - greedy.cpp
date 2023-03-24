// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	int p = 0;
	bool ans = 1;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		x -= p;
		p = x % 2;
		if (x == -1 || (i == n-1 && p == 1)) ans = 0; 
	}

	ans == 1 ? cout << "YES\n" : cout << "NO";

	return 0;
}


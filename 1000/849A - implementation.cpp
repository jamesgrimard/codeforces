// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >>n ;
	bool f1 = 0, f2 = 0;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		if (i == 0 && x % 2 == 1) f1 = 1;
		if (i == n-1 && x % 2 == 1) f2 = 1;
	}

	(f1 == 1 && f2 == 1 && n % 2 == 1) ? cout << "Yes" : cout << "No";




	return 0;
}




// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	int a = 0 , b = 0 , c = 0;

	for (int i=0;i<n;i++){
		int x,y,z; cin >> x >> y >> z;
		a += x; b += y; c += z;
	}

	if (a != 0 || b != 0 || c != 0) {
		cout << "NO";
	} else {
		cout << "YES";
	}


	return 0;
}


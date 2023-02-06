// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	map<int,bool> m;

	for (int i=1;i<tt;i++) {
		int x;
		cin >> x;
		m[x] = 1;
	}

	for (int i=1;i<=tt;i++) {
		if (m[i] != 1) {
			cout << i << endl;
			break;
		} 
	}
	
	return 0;
}
// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt,a,b;
	cin >> tt >> a >> b;

	map<int,bool> m;

	for (int i=0;i<a;i++) {
		int x;
		cin >> x;
		m[x] = true;
	}

	for (int i=0;i<b;i++) {
		int x;
		cin >> x;
	}

	for (int i=1;i<=tt;i++) {
		(m[i] != true) ? cout << "2 " : cout << "1 ";
	}

	return 0;
}
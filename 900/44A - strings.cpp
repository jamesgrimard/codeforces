// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	map<string,int> m;

	for (int i=0;i<n;i++) {
		string x,y; cin >> x >> y;

		x += ('_'+y);
		m[x]++;
	}

	cout << size(m);

	return 0;
}


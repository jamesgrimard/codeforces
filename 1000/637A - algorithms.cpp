// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	map<int,int> m;
	int mx = 0 , v = 0;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		m[x]++;
		if (mx < m[x]) {
			mx = m[x];
			v = x;
		}
	}
	cout << v;
	
	return 0;
}




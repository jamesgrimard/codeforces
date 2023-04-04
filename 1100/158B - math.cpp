// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	vector<int> a(5);
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		a[x]++;
	}

	a[1] -= min(a[1],a[3]);

	if (a[2] % 2 == 1) a[1] = max(0,a[1]-2);

	cout << a[4] + a[3] + ceil((float)a[2]/2.0) + ceil((float)a[1]/4.0);

	return 0;
}

// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n, t, b; cin >> n >> t >> b;
	int count = 0 , p = 0;
	for (int i=0;i<n;i++) {
		int x ,y ; cin >> x >> y;
		count += ((x-p)/b);
		p = x + y;
	}
	count += ((t-p)/b);
	cout << count << '\n';


	return 0;
}




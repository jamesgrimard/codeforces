// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int g , k; cin >> g >> k;

	if (g == 0 && k > 0) {
		cout << "Impossible";
	} else {
		cout << g + max(0,k-g) << " ";
		(k == 0) ? cout << g : cout << g-1 + k;
	}

	return 0;
}

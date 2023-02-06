// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	float n ; cin >> n;
	float sum = 0.0;
	for (float i=1.0;i<=n;i++) {
		sum += (1.0/i);
	}
	cout << sum << '\n';


	return 0;
}

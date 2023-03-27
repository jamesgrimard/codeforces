// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int sum = 0;
	for (int i=0;i<5;i++) {
		int x; cin >> x;
		sum += x;
	}

	(sum % 5 == 0 && sum >= 5) ? cout << sum / 5 : cout << -1;
	
	return 0;
}


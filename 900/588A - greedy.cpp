// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	int sum = 0 , P = 0;

	for (int i=0;i<tt;i++) {

		int n , p; cin >> n >> p;

		if (p < P || i == 0) P = p;

		sum += (P * n);
	}

	cout << sum << '\n';	

	return 0;
}

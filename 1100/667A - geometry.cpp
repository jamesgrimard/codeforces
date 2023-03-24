// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	double d , h , v , e; cin >> d >> h >> v >> e;

	double r = d / 2.0;

	double inflow = 3.141592 * r * r * e;

	if (v <= inflow) {
		cout << "NO";
	} else {
		double outflow = 3.141592 * r * r * h / (v-inflow);
		cout << "YES\n";
		cout << outflow;
	}

	return 0;
}


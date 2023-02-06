// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();


	double h , l ; cin >> h >> l;

	cout << setprecision(12) << ((l*l - h*h) / (2.0 * h));

	return 0;
}
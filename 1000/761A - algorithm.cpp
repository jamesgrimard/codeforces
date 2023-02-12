// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int a , b; cin >> a >> b;
	(abs(a - b) == 1 || abs(a - b) == 0 && (a != 0 && b != 0)) ? cout << "YES" : cout << "NO";

	return 0;
}




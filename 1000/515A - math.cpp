// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int x , y , s; cin >> x >> y >> s;

	(abs(x) + abs(y) <= s && (abs(x)+abs(y)) % 2 == s % 2) ? cout << "Yes" : cout << "No";


	return 0;
}




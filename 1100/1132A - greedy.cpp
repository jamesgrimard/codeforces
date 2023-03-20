// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int a , b, c, d; cin >> a >> b >> c >> d;
	(a != d || (a == 0 && c != 0)) ? cout << 0 : cout << 1; 

	return 0;
}

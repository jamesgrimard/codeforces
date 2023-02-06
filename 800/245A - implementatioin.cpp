// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	int a(0),b(0),first(3);

	while (tt--) {
			
		int type,pa,pb;
		cin >> type >> pa >> pb;

		if (first == 3) {
			(type == 1) ? first = 1 : first = 2;
		}
		(type == 1) ? a += (pa - pb) : b += (pa - pb);
		
	}

	(a >= 0) ? cout << "LIVE" : cout << "DEAD";
	cout << '\n';
	(b >= 0) ? cout << "LIVE" : cout << "DEAD";
	cout << '\n';

	return 0;
}
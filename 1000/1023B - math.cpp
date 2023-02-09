// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long a , b; cin >> a >> b;

	if (a >= b) {
		cout << (b-1)/2;
	} else {
		cout << max((a - (b-a) + 1) /2,0LL);
	}

	return 0;
}




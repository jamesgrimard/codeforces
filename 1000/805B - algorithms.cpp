// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n;  cin >> n;

	for (int i=0;i<n;i++) {
		if (i % 4 <= 1) cout << "b";
		if (i % 4 >= 2) cout << "a";
	}

	return 0;
}




// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	string s; cin >> s;
	vector<int> a(n) , b(100000);
	for (int i=0;i<n;i++) cin >> a[i];
	int index = 0;
	while (1) {
		b[index] = 1;
		char c = s[index];
		int q = a[index];

		if (c == '>') {
			index += q;
		} else if (c == '<') {
			index -= q;
		}

		if (index < 0 || index >= n) {
			cout << "FINITE";
			return 0;
		}

		if ((c != s[index] && q == a[index]) || b[index] == 1) {
			cout << "INFINITE";
			return 0;
		}

	}
	
	return 0;
}




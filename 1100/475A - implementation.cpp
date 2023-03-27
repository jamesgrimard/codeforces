// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	int N = 1;

	cout << "+------------------------+\n";

	vector<string> a(4);

	while (N <= 48) {
		for (int i=0;i<4;i++) {
			if (N <= 4) a[i] += "|";
			if (N > 44) {
				if (N == 45) {
					a[i] += "|D|)";
				} else if (N == 47) {
					a[i] += "..|";
				} else if (N == 48) {
					a[i] += "|.|)";
				} else {
					a[i] += "|.|";
				}
				N++;
				continue;
			}
			if ((N <= n && i != 2) || (N == 3 && N <= n && i == 2)) {
				a[i] += "O.";
			} else if (i == 2 && N > 3) {
				a[i] += "..";
				n++;
			} else {
				a[i] += "#.";
			}
			N++;
		}	
	}

	for (auto v:a) cout << v << '\n';

	cout << "+------------------------+";

	return 0;
}


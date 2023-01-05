// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , m ; cin >> n >> m;

	vector<string> a(n);
	vector<char> b(m);

	

	for (int i=0;i<n;i++) {
		cin >> a[i];
		for (int j=0;j<m;j++) {
			if (a[i][j] > b[j]) b[j] = a[i][j];
		}
	}

	int count = n;

	for (int i=0;i<n;i++) {
		int tally = 0;
		for (int j=0;j<m;j++){
			if (a[i][j] >= b[j]) tally++;
		}
		if (tally == 0) count--;
	}

	cout << count;

	return 0;
}


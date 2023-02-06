// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;

	vector<int> a(n);
	vector<float> b;

	float total = 0;

	for (int i=0;i<n;i++) {
		cin >> a[i];total+=a[i];
		if (a[i] < 5) b.push_back(5.0 - (float) a[i]);
	}

	if (round(total/n) == 5) {
		cout << 0; return 0;
	} 

	sort(rbegin(b),rend(b));

	int tally = 0;

	for (int i=0;i<size(b);i++) {
		tally++; total += b[i];
		if (round(total/n) == 5) {
			cout << tally; return 0;
		}
	}


	return 0;
}


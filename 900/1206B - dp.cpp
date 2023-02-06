// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n;
	cin >> n;

	vector<int> a(n);
	int ng = 0;
	for (int i=0;i<n;i++){
		cin >> a[i];
		if (a[i] < 0) ng++;
	}

	long long count = 0;
	for (int i=0;i<n;i++){
		if (a[i] < -1) count += (a[i] * -1 - 1);
		if (a[i] > 1) count += (a[i] - 1);
		if (a[i] == 0) {
			if (ng % 2 == 0) {
				count++;
			} else {
				count++;
				ng++;
			}
		}
	}

	if (ng % 2 != 0) count += 2;

	cout << count << '\n';

	return 0;
}
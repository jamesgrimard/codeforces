// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt,count=0;
	cin >> tt;

	vector<string> a(tt);

	for (int i=0;i<tt;i++) {
		cin >> a[i];
	}

	for (int i=0;i<size(a[0]);i++){
		for (int j=0;j<tt;j++){
			if (a[j][i] != a[0][i]) {
				cout << count << endl;
				return 0;
			}

		}
		count++;
	}

	cout << count << endl;

	return 0;
}
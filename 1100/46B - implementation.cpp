// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	vector<int> a(5);
	vector<string> ref = {"S","M","L","XL","XXL"};
	for (int i=0;i<5;i++) cin >> a[i];
	int n; cin >> n;
	for (int i=0;i<n;i++) {
		string s;  cin >> s;
		for (int j=0;j<5;j++) {
			if (ref[j] == s) {

				for (int k=0;k<5;k++) {
					if (a[min(4,j+k)] > 0) {
						a[min(4,j+k)]--;
						cout << ref[min(4,j+k)] << '\n';
						break;
					} else if (a[max(0,j-k)] > 0) {
						a[max(0,j-k)]--;
						cout << ref[max(0,j-k)] << '\n';
						break;
					}
				}

			}
		}
	}

	return 0;
}

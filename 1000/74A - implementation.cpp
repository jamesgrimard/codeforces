// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	int mx = 0;
	string name = "";
	for (int i=0;i<n;i++) {
		string s; cin>> s;
		int sum = 0;
		for (int j=0;j<7;j++) {
			int x; cin >> x;
			if (j == 0) {
				sum += x*100;
			} else if (j == 1) {
				sum -= x*50;
			}
			if (j <= 1) continue;
			sum += x;
		}
		if (sum > mx || i == 0) {
			mx = sum;
			name = s;
		}
	}
	cout << name;
	
	return 0;
}


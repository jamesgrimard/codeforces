// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

bool gcd(int a, int b) {
	if (a % b == 0) {
		if (b != 1) return true;
		return false;
	}
	return gcd(b,a%b);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {
		int n;
		cin >> n;

		vector<int> a(n);
		int swapper = 0;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (a[i] % 2 == 0) {
				swap(a[i],a[swapper]);
				swapper++;
			}
		}

		int count = 0;
		for (int i=0;i<n;i++) {
			for (int j=i+1;j<n;j++) {
				if (gcd(a[i],(2*a[j])) == true) count++; 
			}
		}
		cout << count << '\n';
	}

	return 0;
}
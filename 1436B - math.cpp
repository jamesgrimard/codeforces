// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x) {
	for (int i=2;i<=x/2+1;i++) {
		if (x % i == 0) return false;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n; cin >> n;

		vector<int> a(n); a[n-1] = 9;

		for (int i=1;i<n-1;i++) a[i] = 4;

		int sum = 4 * (n-2) + 9;

		for (int i=4;i<=100000;i+=2) {
			if (isPrime(sum+i) == true) {
				a[0] = i;
				break;
			}
		}

		for (int i=0;i<n;i++) {
			for (int j=0+i;j<n+i;j++){
				cout << a[j%n] << " ";
			}
			cout << '\n';
		}

	}


	return 0;
}


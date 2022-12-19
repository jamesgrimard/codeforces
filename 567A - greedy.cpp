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

	vector<int> a(tt);
	for (int i=0;i<tt;i++){
		cin >> a[i];
	}

	for (int i = 0 ; i < tt; i++ ) {

		if (i == 0) {
			cout << (a[1] - a[i]) << " " << (a[tt-1] - a[i]) << '\n';
			continue;
		} 

		if (i == tt-1) {
			cout << (a[i] - a[i-1]) << " " << (a[i] - a[0]) << '\n';	
			continue;
		} 

		(a[i] - a[i-1] < a[i+1] - a[i]) ? cout << (a[i] - a[i-1]) : cout << (a[i+1] - a[i]);
		cout << " ";
		(a[tt-1] - a[i] > a[i] - a[0]) ? cout << (a[tt-1] - a[i]) : cout << (a[i] - a[0]);

		cout << '\n';
	}


	return 0;
}
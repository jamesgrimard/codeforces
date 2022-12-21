// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , d;
	cin >> n >> d;

	int sum = 0, c = 0;

	c = (n - 1) * 10;

	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		sum += x;
	}

	sum += c;

	if (sum <= d) {
		cout << ((c + (d - sum)) / 5);
	} else {
		cout << -1;
	}


	return 0;
}
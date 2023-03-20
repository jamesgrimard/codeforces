// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	vector<int> a(n);

	int avg = 0;

	for (int i=0;i<n;i++) {
		cin >> a[i];
		avg += a[i];
	}

	avg = round((float)avg/(float)n);

	int A = 0 , B = 100000;
	for (int j=1;j<=100;j++) {
		int cnt = 0;
		for (int i=0;i<n;i++) {
			cnt += min(abs(a[i]-j),min(abs(a[i]-(j+1)),abs(a[i]-(j-1))));
		}
		if (cnt < B) {
			A = j;
			B = cnt;
		}
	}
	
	cout << A << " " << B << '\n';

	return 0;
}


// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	vector<int> a(5),b(5), c = {500,1000,1500,2000,2500};
	for (int i=0;i<5;i++) cin >> a[i];
	for (int i=0;i<5;i++) cin >> b[i];
	double sum = 0;
	for (int i=0;i<5;i++) {
		double k = 1 - (double) a[i] / 250.0;
		k *= c[i];
		k -= (50 * b[i]);
		sum += max(0.3*c[i],(double)k);
	}
	int h1 , h0; cin >> h1 >> h0;
	h1 *= 100;
	h1 -= (50*h0); 
	int ans = sum;
	cout << ans + h1;

	return 0;
}




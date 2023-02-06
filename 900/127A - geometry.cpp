// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n,k;cin >> n >> k;

	double X = 0.0 ,Y = 0.0,sum=0.0;

	for (int i=0;i<n;i++) {
		double x,y; cin >> x >> y;
		if (i == 0) {
			X = x; Y = y; continue;
		}
		double c = pow(abs(x-X),2) + pow(abs(y-Y),2);
		sum += sqrt(c); 
		X = x; Y = y;
	}

	cout << setprecision(12) << (sum/50.00*k) << '\n';

	return 0;
}


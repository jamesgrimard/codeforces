// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int x ,y ; cin >> x >> y;
	int n; cin >> n;
	double mn = 0.0;
	for (int i=0;i<n;i++){
		double X,Y,V; cin >> X >> Y >> V;
		double a = abs(x-X)*abs(x-X) , b = abs(y-Y)*abs(y-Y) , c = sqrt(a+b);
		double K = c/V;
		if (i == 0 || K < mn) mn = K;
	}

	cout << setprecision(12)<<mn;

	return 0;
}


// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	int sum = 0;
	for (int i=0;i<n;i++) {
		int y1 , x1 , y2 , x2; cin >> y1 >> x1 >> y2 >> x2;
		sum += ((abs(y2-y1)+1) * (abs(x2-x1)+1));
	}
	cout << sum;

	return 0;
}




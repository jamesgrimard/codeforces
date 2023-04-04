// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int x , y; cin >> x >> y;

	string a = "" , b = "" ;

	while (x > 0) {
		a = to_string(x % 3) + a;
		x /= 3;
	}

	while (y > 0) {
		b = to_string(y % 3) + b;
		y /= 3;
	}

	while (a.size() != b.size()) {
		if (a.size() < b.size()) {
			a = "0" + a;
		} else {
			b = "0" + b;
		}
	}

	string c = "";
	for (int i=0;i<a.size();i++) {
		c += to_string((3 + (b[i]-a[i])) % 3);
	}

	int ans = 0 , p = 1;
	for (int i=c.size()-1;i>=0;i--) {
		ans += p * (c[i]-'0');
		p *= 3;
	}

	cout << ans;


	return 0;
}

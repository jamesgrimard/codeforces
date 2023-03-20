// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int d , a, b; cin >> d >> a >> b;
	int A = d / (a + b) , B = d / (a + b) , k = d % (a + b);
	if (k == 0) {
		cout << "YES\n";
		cout << A << " " << B;
	} else {
		while (A >= 0) {
			if (k % a == 0) {
				A += k / a;
				break;
			}
			if (k % b == 0) {
				B += k / b;
				break;
			}
			A--; B--;
			k += (a + b);
		}
		if (A <= 0 && B <= 0) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
			cout << A << " " << B;
		}
	}

	return 0;
		
}


// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	char A ,B ;cin >> A >> B;
	int n; cin >> n;

	vector<char> a = {'^','>','v','<','^','>','v','<'};

	if (n % 4 == 3 || n % 4 == 1) {
		for (int i=0;i<size(a);i++) {
			if (a[i] == A && a[i+(n%4)] == B) {
				cout << "cw"; return 0;
			}
		}
		for (int i=size(a)-1;i>=0;i--) {
			if (a[i] == A && a[i-(n%4)] == B) {
				cout << "ccw"; return 0;
			}
		}
	}

	cout << "undefined";



	return 0;
}


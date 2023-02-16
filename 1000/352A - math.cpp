// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	int f  =  0 ,  o = 0;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		(x == 5) ? f++ : o++;
	}

	if (f >= 9 && o > 0) {
		for (int i=0;i<f/9;i++) cout << "555555555";
		for (int i=0;i<o;i++) cout << "0";
	} else {
		(o > 0) ? cout << 0 : cout << -1;
	}

	return 0;
}




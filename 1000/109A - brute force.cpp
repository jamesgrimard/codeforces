// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;

	int N = 0 , s = 0 , f = 0;
	while (N <= n) {
		if (N % 7 == 0 && (n-N) % 4 == 0) {
			s = N / 7; f = (n-N) / 4;			
		}
		N += 7;
	}

	if (f == s && s == 0) {
		cout << -1;
	} else {
		for (int i=0;i<f;i++) cout << 4;
		for (int i=0;i<s;i++) cout << 7;
	}


	return 0;
}


// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , l , r ; cin >> n >> l >> r;

	long long s1 = 0 , s2 = 0;

	for (int i=0;i<n;i++) {
		if (i < l) {
			s1 += pow(2,i);
		} else {
			s1++;
		}
		if (i<r) {
			s2 += pow(2,i);
		} else {
			s2 += pow(2,r-1);
		}
	}

	cout << s1 << " " << s2;

	return 0;
}


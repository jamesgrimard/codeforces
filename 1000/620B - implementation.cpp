// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int a , b; cin >> a >> b;

	map<int,int> m;
	m[0] = 6 , m[1] = 2 , m[2] = 5 , m[3] = 5 , m[4] = 4;
	m[5] = 5 , m[6] = 6 , m[7] = 3 , m[8] = 7 , m[9] = 6;

	long long count = 0;
	while (a <= b) {
		int k = a;
		while (k > 0) {
			count += m[k%10];
			k /= 10;
		}
		a++;
	}

	cout << count;

	return 0;
}

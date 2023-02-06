// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n,m,a;cin >> n >> m >> a;

	long long k1 = ceil((double) n / (double) a);
	long long k2 = ceil((double) max(m-a,0) / (double) a);

	cout << (k1+k2*k1);


	return 0;
}


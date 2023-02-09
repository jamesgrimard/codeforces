// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n , m , a , b; cin >> n >> m >> a >> b;
	cout << min((n%m) * b , (m - (n%m)) * a);

	return 0;
}




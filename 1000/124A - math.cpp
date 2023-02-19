// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , a, b; cin >> n >> a >> b;
	cout << min(n-a,b+1);

	return 0;
}




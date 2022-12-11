// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long tt,x,y;
	cin >> tt >> x >> y;

	long long a,b;
	a = (x-1) + (y-1);
	b = (tt-x) + (tt-y);

	cout << ((a <= b) ? "White" : "Black");

	return 0;
}
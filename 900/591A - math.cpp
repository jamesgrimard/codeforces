// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	float length; cin >> length;

	float a , b; cin >> a >> b;

	float k = length / (a+b) * a;

	cout << (k);

	return 0;
}


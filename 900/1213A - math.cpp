// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n;
	cin >> n;

	int e = 0 , o = 0;
	for (int i=0;i<n;i++){
		int x;
		cin >> x;
		(x % 2 == 0) ? e++ : o++;
	}

	cout << min(e,o);


	return 0;
}
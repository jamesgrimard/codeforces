// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	long long s1 = 0 , s2 = 0;

	for (int i=0;i<n;i++){
		int x; cin >> x;
		s1 |= x;
	}

	for (int i=0;i<n;i++){
		int x; cin >> x;
		s2 |= x;
	}

	cout << (s1+s2);

	return 0;
}


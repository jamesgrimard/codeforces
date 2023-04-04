// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	vector<int> a(3),b(3);
	for (int i=0;i<3;i++) cin >> a[i];
	for (int i=0;i<3;i++) cin >> b[i];

	int cnt = 0;
	
	for (int i=0;i<3;i++) {
		if (a[i] == b[i]) cnt++;
	}

	cnt >= 1 ? cout << "YES" : cout << "NO";


	return 0;
}

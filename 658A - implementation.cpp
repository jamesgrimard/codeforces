// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt,c;
	cin >> tt >> c;

	vector<int> a(tt);
	vector<int> b(tt);

	int p1(0),p2(0);

	for (int i=0;i<tt;i++) {
		cin >> a[i];
	}
	int t = 0;
	for (int i=0;i<tt;i++) {
		cin >> b[i];
		t += b[i];
		p1 += max(0,(a[i] - (t * c)));
	}
	t = 0;
	for (int i=(tt-1);i>=0;i--) {
		t += b[i]; 
		p2 += max(0,(a[i] - (t * c)));
	}

	(p1 > p2) ? cout << "Limak" : (p2 > p1) ? cout << "Radewoosh" : cout << "Tie";

	cout << '\n';

	return 0;
}
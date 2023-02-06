// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt , x , y;
	cin >> tt >> x >> y;

	vector<int> a(tt);
	for (int i=0;i<tt;i++){
		cin >> a[i];
	}

	sort(a.begin(),a.end());

	cout << (a[tt-x] - a[y-1]) << endl;

	return 0;
}
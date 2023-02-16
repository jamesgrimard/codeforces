// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	map<int,bool> my,mx;
	n *= n;
	for (int i=0;i<n;i++) {
		int y , x; cin >> y >> x;
		if (my[y] == 0 && mx[x] == 0) {
			cout << i + 1 << " ";
			my[y] = 1; mx[x] = 1;
		}
	}


	return 0;
}




// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , N; cin >> n >> N;

	vector<int> a(n);

	for (int i=0;i<N;i++) {
		int x; cin >> x;
		a[x-1]++;
	}

	sort(begin(a),end(a)); cout << a[0];


	return 0;
}


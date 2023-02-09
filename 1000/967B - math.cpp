// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , in , out; cin >> n >> in >> out;
	vector<int> a(n);
	int sum = 0;
	for (int i=0;i<n;i++) {
		cin >> a[i];
		sum += a[i];
	}

	if (a[0]*in/sum >= out) {
		cout << 0;
	} else {
		int first = a[0] , tally = 0;
		bool f = 1;
		sort(rbegin(a),rend(a));
		for (int i=0;i<n;i++) {
			if (a[i] == first && f == 1) {f=0;continue;}
			sum -= a[i]; tally++;
			if (first*in/sum >= out) {
				cout << tally;
				return 0;
			}
		}
	}

	return 0;
}




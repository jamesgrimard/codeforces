// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	vector<int> o , e;

	for (int i=0;i<n;i++) {
		int x;  cin >> x;
		(x % 2 == 0) ? e.push_back(x) : o.push_back(x);
	}

	sort(o.rbegin(),o.rend()); sort(e.rbegin(),e.rend());

	int a = size(o) , b = size(e);

	if (abs(a-b) <= 1) {
		cout << 0;
		return 0;
	}

	int k = min(size(o),size(e)) + 1;

	if (size(o) < size(e)) o = e;

	long long sum = 0;

	for (int i=size(o)-1;i>=k;i--) sum += o[i];

	cout << sum;

	return 0;
}


// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

long long l , r , tally;
vector<long long> A;

void myBuild(long long x) {
	if (x > 1e10) return;
	if (x >= l) A.push_back(x);
	myBuild(x*10+4);
	myBuild(x*10+7);
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	cin >> l >> r;

	myBuild(0);

	sort(begin(A),end(A));

	long long sum = 0 , cnt = 0 , index = 0;

	for (int i=0;i<A.size();i++) {
		if (A[i] >= l) {
			index = i;
			break;
		}
	}

	for (long long i=l;i<=r;i++) {
		cnt++;
		if (i == A[index] || i == r) {
			sum += cnt * A[index];
			cnt = 0;
			index++;
		}
	}

	cout << sum;


	return 0;
}

// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	//ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n ; cin >> n;
	vector<bool> a(4);
	a[n] = 1;
	for (int i=0;i<3;i++) {
		int start, finish; cin >> start >> finish;
		swap(a[start],a[finish]);
	}
	for (int i=1;i<=3;i++) if (a[i] == 1) cout << i;
	return 0;
}


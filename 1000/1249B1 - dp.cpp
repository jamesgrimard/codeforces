// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int search(vector<int>& a, int index, int i, int count) {
	if (index-1 == i) return count;
	return search(a,a[index-1],i,count+1);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		vector<int> a(n) , b;
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=0;i<n;i++) {
			cout << (search(a,a[i],i,1)) << " ";
		}
		cout << '\n';
	}
	return 0;
}



// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int c1,c2,a,b; cin >> c1 >> c2 >> a >> b;

	vector<pair<int,int>> A;
	pair<int,int> p;
	for (int i=a;i<=c1;i++) {
		for (int j=b;j<=min(i-1,c2);j++) {
			p.first = i;
			p.second = j;
			A.push_back(p);
		}
	}

	cout << A.size() << '\n';
	for (int i=0;i<A.size();i++) cout << A[i].first << " " << A[i].second << '\n';

	return 0;
}

// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int a , b; cin >> a >> b;
	int x , y; cin >> x >> y;
	int n; cin >> n;

	int max_cards_team_1 = a * (x-1);
	int max_cards_team_2 = b * (y-1);

	cout << max(n - (max_cards_team_1 + max_cards_team_2) , 0) << " ";

	if (x <= y) {
		swap(x,y); swap(a,b);
	}

	int k = min(n/y,b) , count = k;

	n -= (k*y);

	k = min(n/x,a);

	count += k;

	cout << count << '\n';

	return 0;
}



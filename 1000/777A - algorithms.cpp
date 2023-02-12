// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >>n>>k;
	n %= 6;

	vector<string> a = {"012" , "102" , "120" , "210" , "201" , "021" , "012"};
	cout << a[0][a[n][k]-'0'];

	return 0;
}



